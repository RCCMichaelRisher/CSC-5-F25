/*
Author: Michael Risher
Purpose: 
*/

//system libraries
#include <iostream>  //input/output library
#include <fstream> //files
#include <iomanip> //format
#include <string>

using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    ofstream recipt;
    string itemName;
    float itemPrice;
    float subtotal, total, tax, taxRate;
    char addMore; //continue adding variable

    //initialize variables
    recipt.open( "receipt.txt" );
    subtotal = 0.0;
    total = 0.0;
    tax = 0.0;

    //if file didnt open kill the program
    if( !recipt ){
        cout << "Error opening the file receipt.txt" << endl;
        return 1;
    }

    //map/process the inputs -> outputs
    do{
        //ask what the item is
        cout << "Enter the item name: ";
        getline( cin, itemName );

        //ask the price
        cout << "Enter the price of " << itemName << ": ";
        cin >> itemPrice;
        cin.ignore();

        // sum it with the subtotal
        subtotal += itemPrice;

        //write their item and price to the receipt
        recipt << fixed << setprecision( 2 ) << showpoint;
        recipt << itemName << "\t $" << itemPrice << endl;

        //ask them for more?
        cout << "Enter more (y/n): ";
        cin >> addMore;
        cin.ignore();
    } while( addMore == 'y' || addMore == 'Y' ); // tolower( addMore ) == 'y'

    //ask for the tax rate
    cout << "Enter the tax rate in percent: ";
    cin >> taxRate;

    //cacluate the tax & total
    tax = subtotal * ( taxRate / 100 );
    total = subtotal + tax;

    //display input/outputs
    recipt << "----------------------" << endl;
    recipt << "Subtotal\t $" << subtotal << endl;
    recipt << "Tax\t $" << tax << endl;
    recipt << "Total\t $" << total << endl;

    cout << "----------------------" << endl;
    cout << "Subtotal\t $" << subtotal << endl;
    cout << "Tax\t $" << tax << endl;
    cout << "Total\t $" << total << endl;
    
    
    //clean up memory, close files
    recipt.close();

    //exit the program
    return 0;
}
