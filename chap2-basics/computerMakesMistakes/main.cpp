/*
Author: Michael Risher
Purpose: Show potential mistakes the computer can make
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
    signed short num1, num2;  //-32,678 +32,677
    short result;
    
    //initialize variables
    num1 = 30000;
    num2 = 20000;

    //map/process the inputs -> outputs

    //add the numbers together 
    result = num1 + num2; 
    //when adding the short which has an upper bound 32767 we exceed that and go into the negative range in loop fashion
    //retulting in result = -15536

    //display input/outputs

    cout << num1 << " + " << num2 << " = " << result << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
