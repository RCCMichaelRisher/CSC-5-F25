/*
Author: Michael Risher
Purpose: tests scope of 2 variables
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
    int number;
    //initialize variables
    cout << "Enter a number: ";
    cin >> number;

    //map/process the inputs -> outputs

    //display input/outputs

    
    if( number > 0 ){
        int number;
        cout << "Enter a second number: ";
        cin >> number;
        cout << "2nd number is " << number << endl;
    }
    cout << "1st number is " << number << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
