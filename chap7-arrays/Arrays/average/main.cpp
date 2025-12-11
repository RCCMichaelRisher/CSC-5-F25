/* 
 * Author: Michael Risher
 * Purpose: program to calculate the average of an array of numbers
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <span>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

int getNumber(); // Function to get a positive integer from the user
void input(int array[], int size); // Function to input numbers into the array
float average(int array[], int size); // Function to calculate the average of the numbers
//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int size;
    //Initialize Variables
    size = getNumber(); // Call function to get a positive integer from the user
    int array[size]; // Array to hold numbers

    input(array, size); // Call function to input numbers into the array
    // Calculate the average
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "The average of the numbers is: " << average(array, size) << endl; // Output the average
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

int getNumber(){
    int n;
    do{
        cout << "Enter a positive integer for the number of items to average: ";
        cin >> n; // Input the number for which to calculate the factorial
    } while(n < 0); // Check if the number is negative
    return n;
}

void input( int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> array[i]; // Input the number for which to calculate the factorial
    }
}

float average( int array[], int size) {
    float sum = 0; // Initialize sum to 0
    for (int i = 0; i < size; i++) {
        sum += array[i]; // Add each number to the sum
    }
    //THIS IS THE WRONG WAY TO DO IT
    // for( int val : array) {
    //     sum += val; // Add each number to the sum
    // }

    // for( int val : std::span( array, size)) {
    //     sum += val; // Add each number to the sum
    // }
    return sum / size; // Return the average
}