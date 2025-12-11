/* 
 * Author: Michael Risher
 * Purpose: find the min and max of an array
 *          using a function
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>  //Random number generation
#include <ctime>    //Time library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void fillArray(int array[], int size); // Function to fill the array with random numbers
int minMax(int array[], int size, int &maxValue); // Function to find the minimum and maximum values in the array
//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables

    const int SIZE = 500; // Size of the array
    int array[SIZE]; // Array to hold random numbers
    int minValue; // Variable to hold the minimum value
    int maxValue; // Variable to hold the maximum value
    
    //Initialize Variables
    fillArray(array, SIZE); // Fill the array with random numbers
    minValue = minMax( array, SIZE, maxValue); // Call the function to find min and max values
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "The minimum value in the array is: " << minValue << endl;
    cout << "The maximum value in the array is: " << maxValue << endl;

    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void fillArray( int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() ; // Fill with random numbers between 1 and 100
    }
}

int minMax( int array[], int size, int &maxValue) {
    int minValue = array[0]; // Initialize minValue to the first element
    maxValue = array[0]; // Initialize maxValue to the first element
    
    for (int i = 1; i < size; i++) {
        if (array[i] < minValue) {
            minValue = array[i]; // Update minValue if a smaller value is found
        }
        if (array[i] > maxValue) {
            maxValue = array[i]; // Update maxValue if a larger value is found
        }
    }
    
    return minValue; // Return the minimum value
}