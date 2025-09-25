/*
Author: Michael Risher
Purpose: simple program to test string compares
*/

//system libraries
#include <iostream>  //input/output library
#include <string> //getline & string functions
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    string str1, str2;
    //initialize variables
    cout << "Enter a string for string 1: ";
    getline( cin, str1 ); //gets the whole string

    cout << "Enter a string for string 2: ";
    getline( cin, str2 );

    //map/process the inputs -> outputs

    //display input/outputs
    cout << "Comparing " << str1 << " with " << str2 << endl;

    if( str1 == str2 ){ //are they equal with each other
        cout << "- they are equal (==)" << endl;
    } else {
        cout << "- they are not equal (!=)" << endl;
    }

    //less than & greater than
    if( str1 < str2 ){
        cout << "- str1 is less than str2 (<)" << endl;
    } else {
        //greater than if not less than
        cout << "- str1 is greater than str2 (>)" << endl;
    }

    //less than equal to & greater than equal to
    if( str1 <= str2 ){
        cout << "- str1 is less than str2 (<=)" << endl;
    } else {
        //greater than if not less than
        cout << "- str1 is greater than str2 (>=)" << endl;
    }

    //clean up memory, close files

    //exit the program
    return 0;
}
