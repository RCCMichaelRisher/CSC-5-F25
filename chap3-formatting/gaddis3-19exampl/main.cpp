/*
Author: Michael Risher
Purpose: 
*/

//system libraries
#include <iostream>  //input/output library
#include <string>
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    string name, city;
    //initialize variables

    cout << "Enter your name: ";
    //cin >> name;  //breaks if you have a space in your name
    getline( cin, name ); 

    cout << "enter the city: ";
    // cin >> city; 
    getline( cin, city );

    //map/process the inputs -> outputs

    //display input/outputs
    cout << "hello " << name << endl;
    cout << "lives in " << city << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
