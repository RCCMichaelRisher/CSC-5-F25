/*
Author: Michael Risher
Purpose: demo of type casting
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
    int num1 = 15;
    int num2 = 32;
    float result = num2 / num1;
    //map/process the inputs -> outputs

    //display input/outputs
    cout << num2 / static_cast<float>(num1) << endl;
    cout << "result: " << result << endl;

    char ch = 7;
    cout << ":" << ch << " is " << static_cast<int>( ch ) << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
