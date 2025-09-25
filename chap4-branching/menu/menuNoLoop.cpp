/*
Author: Michael Risher
Purpose: basic menu no looping no function chapter 4 menu
*/

//system libraries
#include <iostream>  //input/output library
#include <cstdlib>  //random library
#include <ctime> //time library
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed
    srand( time( 0 ) ); //only run this once per program
    //declare variables
    char choice;

    //initialize variables
    cout << endl << "Homework Menu" << endl;
    cout << "Enter 1 for problem 1" << endl;
    cout << "Enter 2 for problem 2" << endl;
    cout << "Enter 3 for problem 3" << endl;
    cout << "Enter 4 for problem 4" << endl;
    //addmore if needed

    //get the user input
    cin >> choice;

    //validate
    if( choice < '1' || choice > '4' ){
        cout << "input a valid option!!!" << endl;
        return 0;
    }
    //map/process the inputs -> outputs
    if( choice == '1' ){
        //do problem 1
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
    } else if ( choice == '2' ){
        //do problem 2
        cout << "Random number is: " << rand() % 21 + 30 << endl; //[30,50]
        cout << "Random number is: " << rand() % 21 + 30 << endl; //[30,50]
        cout << "Random number is: " << rand() % 21 + 30 << endl; //[30,50]
        cout << "Random number is: " << rand() % 21 + 30 << endl; //[30,50]
        cout << "Random number is: " << rand() % 21 + 30 << endl; //[30,50]
        cout << "Random number is: " << rand() % 21 + 30 << endl; //[30,50]
        cout << "Random number is: " << rand() % 21 + 30 << endl; //[30,50]
        cout << "Random number is: " << rand() % 21 + 30 << endl; //[30,50]
    } else if ( choice == '3' ) {

    } else if ( choice == '4' ) {

    } else {
        //how did you get here
        cout << "your special" << endl;
    }
    //display input/outputs

    //clean up memory, close files

    //exit the program
    return 0;
}
