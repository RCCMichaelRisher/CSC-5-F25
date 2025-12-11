/* 
 * Author: Michael Risher
 * Purpose: program to fill an array with random numbers
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const int N = 100; // Size of the array
    int array[N]; // Array to hold random numbers
    //Initialize Variables

    for( int i = 0; i < N; i++) {
        array[i] = rand() % 100 + 1; // Fill with random numbers between 1 and 100
    }
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    for( int i = 0; i < N; i++) {
        cout << array[i] << " "; // Display the random numbers
    }
    cout << endl; // New line after displaying the array


    cout << "print the array with a range based for loop" << endl;
    for( int val : array) {
        cout << val << " "; // Display the random numbers
    }
    cout << endl;
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}