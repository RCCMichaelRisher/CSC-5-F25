/*
Author: Michael Risher
Purpose: practice sobriety test
*/

//system libraries
#include <iostream>  //input/output library
#include <cmath>
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    char letter;
    int counter;

    //initialize variables
    letter = 'a';
    counter = 0;
    //map/process the inputs -> outputs

    //display input/outputs
    while( counter < 26 ) { //while counter is less than 26 loop it
        cout << letter << " ";
        counter++;
        letter++;
    }

    letter--; //go back to 'z'
    cout << endl << endl << "now the test begins by doing backwards" << endl;

    while( counter > 0 ) {
        cout << letter << " ";
        counter--;
        letter--;
    }

    //clean up memory, close files

    //exit the program
    return 0;
}
