/* 
 * Author: Michael Risher
 * Purpose: bank atm with functions
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void runAtm( float &balance );
void save( float balance, string balFile );
void load( float &balance, string balFile );
int showMenu( );
void toMoney( float n );

void showBalance( float balance );
float withdraw( float &balance );
float deposit( float &balance );
void performTransaction( int choice, float &balance );

void logTransaction( int choice, float balance, float amount );
void clearPrevTransaction();
//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    float accountBalance = 100;
    runAtm( accountBalance );

    return 0;
}


//run atm function does the bulk of the work
//accountBalance(from main) -> balance(runAtm)
void runAtm( float &balance  ){
    //clear any past transactions
    clearPrevTransaction();
    string balanceFile = "bal.money";
    //load
    load( balance, balanceFile );

    int choice;
    //menu
    do{
        //get their choice
        choice = showMenu();
        if( choice == 1 || choice == 2){
            //doing a transaction of some sort.
            performTransaction( choice, balance );
            //save
            save( balance, balanceFile );
        } else if( choice == 3 ){
            //show balance
            showBalance( balance );
        } else{
            cout << "Exiting" << endl;
            //exit
        }
        
    } while ( choice != 4 );
}

void load( float &balance, string balFile ){
    ifstream inFile( balFile );
    //make sure it opened
    if( inFile.is_open() ){
        inFile >> balance; //load from the file their balance
        inFile.close();
    } else {
        balance = 0.0f;
        save( balance, balFile ); 
    }
}
void save( float balance, string balFile ){
    ofstream outFile( balFile );
    //test if opened
    if( outFile.is_open() ){
        outFile << balance; //write the balance to the file
        outFile.close();
    } else{
        cout << "FAILED TO SAVE BALANCE" << endl;
    }
}

//print the menu and do input
int showMenu( ){
    int option;
    //printing the stuff
    cout << "\n------- Bank Menu --------\n";
    cout << "1. Withdraw Money" << endl;
    cout << "2. Deposit Money"  << endl;
    cout << "3. Show Balance"   << endl;
    cout << "4. Exit"           << endl;
    cout << "Selection an option\n> " ;
    //wait for input
    cin >> option;
    cout << "--------------------------\n\n";
    return option;
}

//choice = 1 takeout, 2 put in
//accountBalance(main) -> balance(runAtm) -> balance(performTransaction)
void performTransaction( int choice, float &balance ){
    float amount = 0;
    if( choice == 1 ){
        //take out money
        amount = withdraw( balance );
        cout << "Withdrew: $";
        toMoney( amount );
        cout << endl;
        if( amount > 0 ){
            logTransaction( choice, balance, amount );
        }
    } else if( choice == 2 ){
        //put money in
        amount = deposit( balance );
        cout << "Deposited: $";
        toMoney( amount );
        cout << endl;
        if( amount > 0 ){
            logTransaction( choice, balance, amount );
        }
    }

}

float withdraw( float &balance ){
    float amount;
    cout << "How much are you withdrawing\n> $";
    cin >> amount;
    //check if they have money
    if( balance >= amount ){
        balance -= amount;
        return amount;
    } else {
        cout << "Not Enough Funds Available!\nBalance: $";
        toMoney( balance );
        cout << endl;
        return 0.0f;
    }
}

float deposit( float &balance ){
    float amount; 
    cout << "How much are you depositing\n> $";
    cin >> amount;
    if( amount > 0 ){
        balance += amount;
        return amount;
    }
    return 0.0f;
}

void showBalance( float balance ){
    cout << "You balance is: $";
    toMoney( balance );
    cout << endl;
}

//choice = 1 takeout, 2 put in
//balance
//amount taken/deposited
void logTransaction( int choice, float balance, float amount ){
    static int transNumber = 0; //run this line once period!!
    //once end logTransaction ends it will keep its value.
    ofstream outFile( "transactions.txt", ios::app ); //by default ofstream overwrite, with ios::app it will append (add to the bottom)
    //check open
    if( !outFile.is_open() ){
        cout << "Can't log transaction due bad file opening";
        return;
    }
    
    outFile << "Transaction " << ++transNumber << ": ";
    //figure out the type of transaction
    string type = ( choice == 1 ? "Withdrew" : "Deposited" );

    outFile << type << " $" << fixed << setprecision( 2 ) <<amount;
    outFile << " New balance $" << fixed << setprecision( 2 ) << balance << endl;
    outFile.close();
    //done 
}

void clearPrevTransaction(){
    //erase the previous contents
    ofstream outFile( "transactions.txt" );
    outFile.close();
}

void toMoney( float n ){
    cout << fixed << setprecision( 2 ) << n;
}