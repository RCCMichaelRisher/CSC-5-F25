/*
Author: Michael Risher
Purpose: program that allows for user to enter time in seconds the outputs how far an objects whill drop by that time in feet
*/

//system libraries
#include <iostream>  //input/output library
#include <cmath> //math library
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension
const float ACCELERATION = 32.0f;

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    float distance;
    int time;
    //initialize variables
    //ask the user for time
    cout << "Enter the number of seconds whole numbers only: ";
    cin >> time;

    //map/process the inputs -> outputs

    //do the equation for distance
    //distance = ( acceleration * time^2 ) / 2
    distance = ACCELERATION * ( time * time ); //the first way
    // distance = ACCELERATION * pow( time, 2 ); //another way

    distance /= 2;  //distance = distance / 2
    //unneed code but the explain perks
    // time++; //time = time + 1;
    // time--; //time = time - 1;

    //display input/outputs
    cout << "The object fell " << distance << " feet!" << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
