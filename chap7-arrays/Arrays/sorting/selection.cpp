/* 
 * Author: Michael Risher
 * Purpose: slection sort algorithm implementation
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random number generation
#include <ctime>     //Time for random seed

using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void selectionSort( int array[], int size );
void print( int array[], int size );
void swapVal( int &a, int &b );
void fillArray( int array[], int size, bool random= false );
//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand( time( 0 ) );
    //Declare Variables
    int size;
    //Initialize Variables
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size]; // Dynamic array for sorting
    fillArray(array, size, true); // Fill with random values
    //Map/Process the Inputs -> Outputs
    

    cout << "Unsorted array: ";
    print(array, size); // Display unsorted array
    cout << endl;
    // Perform selection sort

    selectionSort(array, size); // Perform selection sort
    cout << "Sorted array: ";
    print(array, size); // Display sorted array
    cout << endl;

    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void fillArray( int array[], int size, bool random ) {
    for (int i = 0; i < size; i++) {
        if( random )
            array[i] = rand() % 100; // Random values between 0 and 99
        else
            array[i] = size - i; // Sequential values
    }
}

void selectionSort( int array[], int size ) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        swapVal(array[i], array[minIndex]);
    }
}

void print( int array[], int size ) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void swapVal( int &a, int &b ) {
    int temp = a;
    a = b;
    b = temp;
}