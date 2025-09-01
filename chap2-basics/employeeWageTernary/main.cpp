/*
Author: Michael Risher
Purpose: employee wage with ternary operator
*/

//system libraries
#include <iostream>  //input/output library
#include <cstdlib> //rand library
#include <ctime> //time library
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed
    srand( time( 0 ) ); //set the random seed

    //declare variables
    float hours, payrate, paycheck;
    char overtime; //when they start getting overtime

    //initialize variables
    hours = rand() % 21 + 30; //randomize hours to a range of 20-30
    payrate = rand() % 11 + 20; //random pay in range 20-30
    overtime = 40;
    
    //map/process the inputs -> outputs
    //straight time
    paycheck = payrate * hours;
    //ternary operator
    //condition ? if its true : if its false
    paycheck += ( hours > overtime ) ? ( hours - overtime ) * payrate * 2 : 0;

    //display input/outputs

    cout << "Hours worked: " << hours << endl;
    cout << "Pay rate: " << payrate << endl;
    cout << "You earned: " << paycheck << endl;
    cout << "You earned: " << ( ( hours > overtime ) ? ( hours - overtime ) * payrate * 2 : 0 ) << " in overtime." << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
