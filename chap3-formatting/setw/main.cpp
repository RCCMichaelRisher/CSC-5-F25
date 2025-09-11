/*
Author: Michael Risher
Purpose: demo of setw
*/

//system libraries
#include <iostream>  //input/output library
#include <iomanip> //formatting library
#include <string>  //string library
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    int intVal = 1234;
    float floatVal = 9.876;
    string strVal = "michael";
    //initialize variables

    //map/process the inputs -> outputs

    //display input/outputs
    cout << "(" << setw( 5 ) << intVal << ")" << endl;
    cout << "(" << setw( 8 ) << floatVal << ")" << endl;
    cout << "(" << setw( 11 ) << strVal << ")" << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
/*
( 1234)
(   9.876)
(    michael)
*/