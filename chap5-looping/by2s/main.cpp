/*
Author: Michael Risher
Purpose: count by 2
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

    //initialize variables

    //map/process the inputs -> outputs

    //count by 2s
    for( int i = 0; i <= 100; i+=2 ){
        cout << i << endl;
    }

    for( int i = 100; i >= 0; i-=2 ){
        cout << i << endl;
    }

    cout << endl;
    //count by 5s
    for( int i = 0; i <= 100; i+=5 ){
        cout << i << endl;
    }

    for( int i = 100; i >= 0; i-=5 ){
        cout << i << endl;
    }
    //display input/outputs

    //clean up memory, close files

    //exit the program
    return 0;
}
