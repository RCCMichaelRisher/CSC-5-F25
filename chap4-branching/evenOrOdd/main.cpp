/*
Author: Michael Risher
Purpose: write a program to find if the number or odd
*/

//system libraries
#include <iostream>  //input/output library
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    int num;
    //initialize variables
    //ask the user for the number
    cout << "Enter a number: " << endl;
    cin >> num;

    //map/process the inputs -> outputs

    //display input/outputs
    cout << num;
    if( ( num % 2 ) == 0 ){
        //its even case
        cout << " is even!" << endl;
        num *= 2; //times by 2 if even
    } else {
        //its odd case 
        cout << " is odd! " << endl;
    }

    //clean up memory, close files

    //exit the program
    return 0;
}
