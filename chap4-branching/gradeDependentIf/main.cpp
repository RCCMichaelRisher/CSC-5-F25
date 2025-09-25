/*
Author: Michael Risher
Purpose: grade program using only if no elses
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
    int grade; //user grade
    char letter; //their letter grade
    //initialize variables
    //ask for grade
    cout << "Enter the numerical grade 0-100: ";
    cin >> grade;


    //input validation
    if( grade < 0 || grade > 100 ){ //if grade is less than 0 or if grade greater than 100
        cout << "enter a valid grade" << endl;
        return 0; //end the program
    }

    //map/process the inputs -> outputs
    if( grade >= 90 ){
        letter = 'A';
    }
    //b's 80-89
    if(  grade >= 80 && grade <= 89 ){
        letter = 'B';
    }

    //c's 70-79
    if( grade >= 70 && grade <= 79 ){
        letter = 'C';
    }

    //d's 60-69
    if( grade >= 60 && grade <= 69 ){
        letter = 'D';
    }

    //f's 0-59
    if ( grade < 60 ) {
        letter = 'F';
    }
    //display input/outputs

    cout << "Your grade is " << letter << ".";
    //clean up memory, close files

    //exit the program
    return 0;
}
