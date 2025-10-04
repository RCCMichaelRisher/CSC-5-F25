/*
Author: Michael Risher
Purpose: housing inflation calculator
*/

//system libraries
#include <iostream>  //input/output library
#include <iomanip>
#include <cmath> //pow function
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    float purchasePrice, //1969 price
        inflationRate,
        inflationPrice;
    int nYears;
    //initialize variables
    purchasePrice = 27900.0f;
    inflationRate = 0.0623f;
    inflationPrice = purchasePrice;
    nYears = 61;

    //map/process the inputs -> outputs

    cout << fixed << setprecision( 2 ) << showpoint;
    cout << setw( 5 ) << "Year" << setw( 15 ) << "House Price" << setw( 15 ) << "Inflation" << endl;
    for( int year = 1969, y = 0; y <= nYears; y++, year++ ){
        //figure inflation for this year
        float inflate = inflationPrice * inflationRate;

        cout << setw( 5 ) << year;
        cout << setw( 15) << inflationPrice;
        cout << setw( 15) << inflate << endl;

        //update the house price for the next year
        if( y != nYears ){
            inflationPrice *= ( 1.0f + inflationRate );
        }
    }
    //display input/outputs
    cout << endl;
    
    cout << "The purchase price of the house in 1969 was: $" << purchasePrice << endl;
    cout << "The selling price in 2030 using sum          $" << inflationPrice << endl;
    /*
    price * ( 1+rate)^years
    */
    float powResult = purchasePrice * pow( ( 1 + inflationRate ), nYears );
    cout << "The selling price in 2030 using pow          $" << powResult << endl;


    //clean up memory, close files

    //exit the program
    return 0;
}
