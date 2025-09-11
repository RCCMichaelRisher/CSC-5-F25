/*
Author: Michael Risher
Purpose: demo setpercision, with 3 days of sales figure get total
*/

//system libraries
#include <iostream>  //input/output library
#include <iomanip>  //formatting library
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    float day1, day2, day3, total;
    //initialize variables
    cout << "enter the sales for day 1: ";
    cin >> day1;

    cout << "enter the sales for day 2: ";
    cin >> day2;

    cout << "enter the sales for day 3: ";
    cin >> day3;

    //map/process the inputs -> outputs
    total = day1 + day2 + day3;

    //display input/outputs
    cout << "sales figures" << endl;
    cout << "-------------------" << endl;
    cout << setprecision( 5 );
    cout << left << setw( 16 ) << "Day 1 | $" << right << setw( 8 ) << day1 << endl;
    cout << left << setw( 16 ) << "Day 2 | $" << right << setw( 8 ) << day2 << endl;
    cout << left << setw( 16 ) << "Day 3 | $" << right << setw( 8 ) << day3 << endl;
    cout << left << setw( 16 ) << "Total | $" << right << setw( 8 ) << total << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
