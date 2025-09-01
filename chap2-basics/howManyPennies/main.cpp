/*
Author: Michael Risher
Purpose: how pocket change do you have in pennies
*/

//system libraries
#include <iostream>  //input/output library
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension
const int DOLLAR = 100; //conversion from dollar to penny
const int QUARTER = 25; 
const int DIME = 10;
const int NICKEL = 5;

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    unsigned int numDollars; //number of dollar you have
    unsigned int numQuarters; //num of quarters
    unsigned int numDimes; //num of Dimes
    unsigned int numNickles; //num of Nickles
    unsigned int numPennies; //num of Pennies

    unsigned int totalPennies;
    //initialize variables
    totalPennies = 0; //without this 0 we get weird numbers. because totalPennies is not always 0 to start with.
    //ask how many dollar you got
    cout << "Enter dollars, quarters, dimes, nickels, and pennies with a space between each" << endl;
    cin >> numDollars >> numQuarters >> numDimes >> numNickles >> numPennies; //cin multiple variables in one go
    /*
    cout << "How many dollars do you have: ";
    cin >> numDollars;

    cout << "How many quarter do you have: ";
    cin >> numQuarters;

    cout << "How many dime do you have: ";
    cin >> numDimes;

    cout << "How many nickels do you have: ";
    cin >> numNickles;

    cout << "How many pennies do you have: ";
    cin >> numPennies;
    */

    //map/process the inputs -> outputs
    //add the dollar -> penny
    totalPennies += numDollars * DOLLAR; //totalPennies = totalPennies + numDollars * DOLLAR
    totalPennies += numQuarters * QUARTER;
    totalPennies += numDimes * DIME;
    totalPennies += numNickles * NICKEL;
    totalPennies += numPennies;

    //display input/outputs
    cout << "You have " << totalPennies << " pennies." << endl;

    //clean up memory, close files

    //exit the program
    return 0;
}
