/*
Author: Michael Risher
Purpose: Pi series with leibniz formula
pi/4 ≂ 1 - 1/3 + 1/5 - 1/7 + 1/9 -.....
pi aproximately= 4(1 - 1/3 + 1/5 - 1/7 + 1/9 -.....)
*/

//system libraries
#include <iostream>  //input/output library
#include <cmath>
#include <iomanip> //formatting

using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension
const float PI = 4 * atan( 1 );

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    float piApprox; //our approx of pi start at 0
    float sign;
    int nTerms; //number of terms in series

    //initialize variables
    piApprox = 0;
    sign = -1;
    nTerms = 100000;

    //map/process the inputs -> outputs

    for( int i = 1, denom = 1; i <= nTerms; i++, denom+=2 ){ //initalize i as the counter and denom as the denom 
        //i <= nTerms test is done here  before any code is run
        sign *= -1.0f; //multiply by neg 1 to flip the sign back and forth
        piApprox += sign / denom;
        //print the first 100 then after print every 1000th approx
        // if( i <= 100 || (i > 100 && i % 1000 == 0 ) ) {
            cout << "Term " << i << " : " << piApprox * 4 << endl;
        // }

        // i++, denom+=2  done here
    } 
    //i=1; (-1*-1) 1/1 = 1
    //i=2; (1*-1) -1/3 = .75
    //i=3; (-1*-1) 1/5 = .2

    piApprox = piApprox * 4; //the series only gets you pi/4 so you need to multiply 4 to it to get pi

    //display input/outputs
    cout << fixed << setprecision( 6 );
    cout << "Approximate value of pi using  " << nTerms << " is " << piApprox << endl;
    cout << "Exact value of pi is " << PI << endl;

    //clean up memory, close files

    //exit the program
    return 0;
}
