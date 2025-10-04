/*
Author: Michael Risher
Purpose: solve e to the x with factorial and power function using a taylor series
*/

//system libraries
#include <iostream>  //input/output library
#include <cmath> //pow function
#include <iomanip>
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    float x;
    float term;
    float e;
    float tolerance;
    int i;
    //initialize variables
    cout << "Enter the x to calculate e^x: ";
    // cin >> x;
    x = 5;

    term = 1;
    e = 1;
    tolerance = 1e-6f; //0.000001;
    i = 1;

    //map/process the inputs -> outputs
    do {
        term *= x / i;
        e += term;
        i++;
    } while ( term > tolerance );

    //display input/outputs
    cout << fixed << setprecision( 6 );
    cout << "Approximate e^" << x << " = " << e << endl;
    cout << "exact       e^" << x << " = " << exp( x ) << endl;

    //clean up memory, close files

    //exit the program
    return 0;
}
