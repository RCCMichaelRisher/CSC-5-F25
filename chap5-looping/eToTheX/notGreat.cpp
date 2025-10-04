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
    int nTerms;
    float e;
    //initialize variables
    cout << "Enter the x to calculate e^x: ";
    // cin >> x;
    x = 5;

    nTerms = 12;
    e = 1;

    //map/process the inputs -> outputs
    //calculate n terms length of e^x
    for( int i = 0; i < nTerms; i++ ){
        float nom = pow( x, i ); // x^0, x^1, x^2, ...., x^n
        float denom = 1;
        //factorial from the 1 to i
        for( int j = 1; j <= i; j++ ){
            denom *= j; 
        }

        //add the term to the summatation 
        e += nom / denom;
    }

    //display input/outputs
    cout << fixed << setprecision( 6 );
    cout << "Approximate e^" << x << " = " << e << endl;
    cout << "exact       e^" << x << " = " << exp( x ) << endl;

    //clean up memory, close files

    //exit the program
    return 0;
}
