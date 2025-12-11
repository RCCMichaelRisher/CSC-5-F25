/* 
 * Author: Michael Risher
 * Purpose: bubble sort algorithm implementation
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
void bubblesort( int array[], int size );
void bubblesortOptimized( int array[], int size );
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
    fillArray(array, size, false); // Fill with random values
    //Map/Process the Inputs -> Outputs
    

    cout << "Unsorted array: ";
    print(array, size); // Display unsorted array
    cout << endl;
    // Perform selection sort

    bubblesortOptimized(array, size); // Perform selection sort
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

void bubblesortOptimized( int array[], int size ) {
    bool swapped;
    int pass = 0; // Initialize pass counter
    do {
        cout << "Pass " << (++pass) << ": ";
        print( array, size + pass - 1); // Display current state of the array;
        cout << endl; 
        swapped = false;
        for (int i = 0; i < size - 1; i++) {
            if (array[i] > array[i + 1]) {
                swapVal(array[i], array[i + 1]);
                swapped = true;
            }
            cout << "i="<<i<<"\t";
            print(array, size); // Display current state of the array
        }
        cout << endl;
        size--; // Reduce the size for the next pass
    } while (swapped);
}

void bubblesort( int array[], int size ) {
    for( int pass = 0; pass < size - 1; pass++ ) {
        cout << "Pass " << (pass + 1) << ": ";
        print( array, size ); // Display current state of the array;
        cout << endl; 
        for (int i = 0; i < size - 1; i++) {
            if (array[i] > array[i + 1]) {
                swapVal(array[i], array[i + 1]);
            }
            cout << "\t";
            print(array, size); // Display current state of the array
        }
        cout << endl;
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