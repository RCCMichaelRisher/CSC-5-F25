/*
Author: Michael Risher
Purpose: pi approx by monte carlo
*/

//system libraries
#include <iostream>  //input/output library
#include <cstdlib>
#include <ctime> //srand
#include <cmath>
// #include <math.h>
#include <iomanip>
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed
    srand( time( 0 ) );
    //declare variables
    float x, y, hyp, piApprox;
    int inC, total, times;

    //initialize variables
    inC = total = 0; //setting inC and total to 0
    times = 1000000; //throw dots 10 times.

    //map/process the inputs -> outputs
    for( int i = 0; i < times; i++ ){
        //random numbers for x and y
        x = static_cast<float>( rand() ) / RAND_MAX;
        y = static_cast<float>( rand() ) / RAND_MAX;
        //calulate the hyp
        //x^2+y^2 <= 1
        hyp = x * x + y * y;
        if( hyp <= 1 ){ //we are in the circle
            inC++;
            // cout << "(" << x << ", " << y << " hyp: " << hyp << ")" << endl;
        } else {
            // cout << "!!(" << x << ", " << y << " hyp: " << hyp << ")" << endl;
        }
        //increment the total thrown count
        total++;
        
    }

    //piApprox 4 * ( dots in )/total dots
    piApprox = 4.0f * static_cast<float>(inC) / total;

    //display input/outputs
    cout << fixed << setprecision(6);
    cout << "Number of dots in circle " << inC << endl;
    cout << "Approximate pi is " << piApprox << endl;
    cout << "Exact value of pi is " << M_PI << endl;

    //clean up memory, close files

    //exit the program
    return 0;
}
