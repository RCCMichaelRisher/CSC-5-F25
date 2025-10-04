/*
Author: Michael Risher
Purpose: practice sobriety test
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
    char letter;


    //initialize variables
    letter = 'a';

    //map/process the inputs -> outputs

    //display input/outputs
    while( letter - 'a' < 26 ) { //while counter is less than 26 loop it
        cout << letter++ << " ";  //change the value of letter after it prints letter
    }

    letter--; //go back to 'z'
    cout << endl << endl << "now the test begins by doing backwards" << endl;

    while( letter - 'a' >= 0 ) {
        cout << letter-- << " "; //change the value of letter after it prints letter
    }

    //clean up memory, close files

    //exit the program
    return 0;
}
