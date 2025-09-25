/*
Author: Michael Risher
Purpose: 
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
    int score = 65;
    char grade = 'F';
    //initialize variables


    //map/process the inputs -> outputs

    //display input/outputs
    if( score > 90 ) {
        grade = 'A';
        cout << "good job" << endl;
    }
    cout << "Your grade is: " << grade << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
