/*
Author: Michael Risher
Purpose: make a program that does averages much better
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
    int numGrades; //number of grades to average
    float sum;
    float avg;

    //initialize variables
    sum = 0; //need sum value to sum stuff

    //how many grades do you want to input
    cout << "how many grades do you want to input: ";
    cin >> numGrades;

    //validate numGrades isn't negative
    while( numGrades <= 0 ){
        cout << "I gotta average something. Enter a postive number for numgrade" <<endl;
        cin >> numGrades;
    }

    //make a counter
    // i, j, k, l convention for naming counters
    int i = 0; //counter = 0
    do{
        float grade;
        cout << "Enter a grade for assignment #" << i + 1 << endl << "> ";
        cin >> grade;
        sum += grade;
    } while( ++i != numGrades ); //while true keep looping
    //map/process the inputs -> outputs
    avg = sum / numGrades;
    //display input/outputs
    cout << "the average is " << avg << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
