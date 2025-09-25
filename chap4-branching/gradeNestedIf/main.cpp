/*
Author: Michael Risher
Purpose: program that determine your letter grade based on the score you give.
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
    int grade; //users grade
    //initialize variables
    //ask the user
    cout << "Enter your grade: ";
    cin >> grade;

    //input validation
    if( grade < 0 ) {
        cout << "That is an invalid grade" << endl;
        return 0; //exits the program
    }
    //no extra credit allowed either
    if( grade > 100 ) {
        cout << "That is an invalid grade" << endl;
        return 0; //exits the program
    }

    //map/process the inputs -> outputs

    //display input/outputs
    if( grade >= 90 ){
        cout << "Your letter grade is A." << endl;
    } else {
        if( grade >= 80 ) {
            cout << "Your letter grade is B." << endl;
        } else {
            if( grade >= 70 ){
                cout << "Your letter grade is C." << endl;
            } else {
                if( grade >= 60 ) {
                    cout << "Your letter grade is D." << endl;
                } else {
                    cout << "Your letter grade is F." << endl;
                }
            }
        }
    }

    //clean up memory, close files

    //exit the program
    return 0;
}
