/* 
 * Author: Michael Risher
 * Purpose: find the min and max of an array
 *          using a function
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>  //Random number generation
#include <ctime>    //Time library
#include <vector>  //Vector library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void fillArray(vector<int> &array, int size ); // Function to fill the array with random numbers
int minMax(const vector<int> &array, int &maxValue); // Function to find the minimum and maximum values in the array
void printArray(const vector<int> &array); // Function to print the array
//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables

    vector<int> array;;
    int minValue; // Variable to hold the minimum value
    int maxValue; // Variable to hold the maximum value
    int initSize = 0;

    
    //Initialize Variables
    cout << "Enter the size of the array: ";
    cin >> initSize; // Get the size of the array from user input
    cout << "Filling: " << initSize << " with random numbers." << endl;
    fillArray( array, initSize ); // Fill the array with random numbers
    
    //Map/Process the Inputs -> Outputs
    //Display Inputs/Outputs
    printArray(array); // Print the array
    minValue = minMax(array, maxValue); // Call the function to find min and max values
    cout << "The minimum value in the array is: " << minValue << endl;
    cout << "The maximum value in the array is: " << maxValue << endl;

    cout << "how many more elements do you want to add? ";
    int moreElements;
    cin >> moreElements; // Get the number of additional elements to add
    cout << "Filling: " << moreElements << " with random numbers." << endl;
    fillArray(array, moreElements); // Fill the array with additional random numbers
    printArray(array); // Print the updated array
    minValue = minMax(array, maxValue); // Call the function to find min and max values again
    cout << "The minimum value in the updated array is: " << minValue << endl;
    cout << "The maximum value in the updated array is: " << maxValue << endl;

    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void printArray( const vector<int> &array ){
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " "; // Print each element in the array
    }
    cout << endl; // New line after printing the array
}

void fillArray(vector<int> &array, int size) {
    for (int i = 0; i < size; i++) {
        array.push_back(rand() % size + 1 ); // Fill with random numbers between 1 and 100
    }
}

int minMax( const vector<int> &array, int &maxValue) {
    int minValue = array.at( 0 ); // Initialize minValue to the first element
    maxValue = array[0]; // Initialize maxValue to the first element
    
    for (int i = 1; i < array.size(); i++) {
        if (array[i] < minValue) {
            minValue = array[i]; // Update minValue if a smaller value is found
        }
        if (array[i] > maxValue) {
            maxValue = array[i]; // Update maxValue if a larger value is found
        }
    }
    
    return minValue; // Return the minimum value
}