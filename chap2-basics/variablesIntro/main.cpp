/*
Author: Michael Risher
Purpose: Play around with variables
*/

//system libraries
#include <iostream>  //input/output library
#include <string>    //string library
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed
    cout << argc << endl;
    //declare variables
    string name;
    float pets;
    //initialize variables
    name = "Michael";
    pets = 2.5f + 1;
    //map/process the inputs -> outputs

    //display input/outputs
    cout << "Hello I'm " << name << endl;
    cout << "I have " << 2 + 1 << " pets how many do you have?" << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
