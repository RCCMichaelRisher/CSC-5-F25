/* 
 * Author: Michael Risher
 * Purpose: fibonacci sequence with functions
 * 
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
int getNumber();
void displayFib( int terms );

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int count;

    //Initialize Variables
    count = getNumber();
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    displayFib( count );
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

int getNumber(){
    int n; //temp
    cout << "Enter a number of fibonacci terms to go up to.\n> ";
    cin >> n;
    return n;
}

void displayFib( int n ){
    //https://en.wikipedia.org/wiki/Fibonacci_sequence#Definition
    //didnt paste well
    int f1 = 1;
    int f2 = 1;
    int fn;

    cout << "fibonacci sequence is: ";

    if( n >= 1 ){
        cout << f1;
    }   
    if( n >= 2 ){ 
        cout << " " << f2;
    }

    for( int i = 2; i < n; i++ ){
        fn = f1 + f2;
        cout << " " << fn;
        f1 = f2;
        f2 = fn;
    }

    cout << endl;


}