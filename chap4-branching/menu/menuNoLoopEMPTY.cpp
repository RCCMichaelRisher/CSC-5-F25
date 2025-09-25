/*
Author: Michael Risher
Purpose: basic menu no looping no function chapter 4 menu
*/

//system libraries
#include <iostream>  //input/output library
#include <cstdlib>  //random library
#include <ctime> //time library
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed
    srand( time( 0 ) ); //only run this once per program
    //declare variables
    char choice;

    //initialize variables
    cout << endl << "Homework Menu" << endl;
    cout << "Enter 1 for problem 1" << endl;
    cout << "Enter 2 for problem 2" << endl;
    cout << "Enter 3 for problem 3" << endl;
    cout << "Enter 4 for problem 4" << endl;
    //addmore if needed

    //get the user input
    cin >> choice;

    //validate
    if( choice < '1' || choice > '4' ){
        cout << "input a valid option!!!" << endl;
        return 0;
    }
    //map/process the inputs -> outputs
    //if you need more choices add more
    if( choice == '1' ){
        //paste problem 1
    } else if ( choice == '2' ){
        //paste problem 2
    } else if ( choice == '3' ) {
        //paste problem 3
    } else if ( choice == '4' ) {
        //paste problem 4
    } else {
        //how did you get here
        cout << "your special" << endl;
    }
    //display input/outputs

    //clean up memory, close files

    //exit the program
    return 0;
}
