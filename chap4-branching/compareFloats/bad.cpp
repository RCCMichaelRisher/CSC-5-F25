/*
Author: Michael Risher
Purpose: compare floats the wrong way
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
    float a;
    float b;

    //initialize variables
    a = 1.5;
    b = 1.5;

    a += 1.0e-6f;


    //map/process the inputs -> outputs

    //display input/outputs
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    if( a == b ){  //test if a is equal to b
        cout << "a == b" << endl;
    }
    //clean up memory, close files

    //exit the program
    return 0;
}
