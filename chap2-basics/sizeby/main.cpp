/*
Author: Michael Risher
Purpose: lets find out what the size of data types are
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
    char charVar = 'A';
    short shortVar = 15324;
    int intVar;
    long longVar;
    float floatVar;
    long long longerVar;
    double doubleVar;
    long double lDoubleVar = 15.2L;
    
    //initialize variables

    intVar = 15;
    longVar = 789L;
    longerVar = 123456789LL;
    //floatin point below here
    floatVar = 3.149f;
    doubleVar = 9.8765;
    
    //map/process the inputs -> outputs

    //display input/outputs
    cout << charVar << " is the size of " << sizeof( charVar ) << " bytes" << endl;
    cout << shortVar << " is the size of " << sizeof( shortVar ) << " bytes" << endl;
    cout << intVar << " is the size of " << sizeof( intVar ) << " bytes" << endl;
    cout << longVar << " is the size of " << sizeof( longVar ) << " bytes\n";
    cout << longerVar << " is the size of " << sizeof( longerVar ) << " bytes" << endl;

    cout << floatVar << " is the size of " << sizeof( floatVar ) << " bytes" << endl;
    cout << doubleVar << " is the size of " << sizeof( doubleVar ) << " bytes" << endl;
    cout << lDoubleVar << " is the size of " << sizeof( lDoubleVar ) << " bytes" << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
