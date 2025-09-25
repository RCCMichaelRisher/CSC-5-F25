/*
Author: Michael Risher
Purpose: truth table program
*/

//system libraries
#include <iostream>  //input/output library
#include <iomanip> //formatting
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    bool x, y;

    //initialize variables
    x = true;
    y = true;
    //map/process the inputs -> outputs

    //display input/outputs

    //print the header first 
    cout << setw( 4 ) << "x"
        << setw( 4 ) << "y"
        << setw( 4 ) << "!x"
        << setw( 4 ) << "!y"
        << setw( 8 ) << "x && y"
        << setw( 8 ) << "x || y"
        << setw( 8 ) << "x ^ y"
        << setw( 13 ) << "x ^ y ^ x" 
        << setw( 13 ) << "!(x && y)"
        << setw( 13 ) << "!x || !y"
        << setw( 13 ) << "!(x || y)"
        << setw( 13 ) << "!x && !y"
    << endl;

    //print the first row
    //where x and y are true
    cout << setw( 4 ) << x
        << setw( 4 ) << y
        << setw( 4 ) << !x
        << setw( 4 ) << !y
        << setw( 8 ) << (x && y)
        << setw( 8 ) << (x || y)
        << setw( 8 ) << (x ^ y)
        << setw( 13 ) << (x ^ y ^ x)
        << setw( 13 ) << !(x && y)
        << setw( 13 ) << (!x || !y)
        << setw( 13 ) << !(x || y)
        << setw( 13 ) << (!x && !y)
    << endl;


    //2nd row
    x = true;
    y = false;
    //where x and y are true
    cout << setw( 4 ) << x
        << setw( 4 ) << y
        << setw( 4 ) << !x
        << setw( 4 ) << !y
        << setw( 8 ) << (x && y)
        << setw( 8 ) << (x || y)
        << setw( 8 ) << (x ^ y)
        << setw( 13 ) << (x ^ y ^ x)
        << setw( 13 ) << !(x && y)
        << setw( 13 ) << (!x || !y)
        << setw( 13 ) << !(x || y)
        << setw( 13 ) << (!x && !y)
    << endl;

    //3nd row
    x = false;
    y = true;
    //where x and y are true
    cout << setw( 4 ) << x
        << setw( 4 ) << y
        << setw( 4 ) << !x
        << setw( 4 ) << !y
        << setw( 8 ) << (x && y)
        << setw( 8 ) << (x || y)
        << setw( 8 ) << (x ^ y)
        << setw( 13 ) << (x ^ y ^ x)
        << setw( 13 ) << !(x && y)
        << setw( 13 ) << (!x || !y)
        << setw( 13 ) << !(x || y)
        << setw( 13 ) << (!x && !y)
    << endl;

    //4th row
    x = false;
    y = false;
    //where x and y are true
    cout << setw( 4 ) << x
        << setw( 4 ) << y
        << setw( 4 ) << !x
        << setw( 4 ) << !y
        << setw( 8 ) << (x && y)
        << setw( 8 ) << (x || y)
        << setw( 8 ) << (x ^ y)
        << setw( 13 ) << (x ^ y ^ x)
        << setw( 13 ) << !(x && y)
        << setw( 13 ) << (!x || !y)
        << setw( 13 ) << !(x || y)
        << setw( 13 ) << (!x && !y)
    << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
