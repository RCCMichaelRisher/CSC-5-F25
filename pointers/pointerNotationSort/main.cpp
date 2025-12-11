/* 
 * Author: Michael Risher
 * Purpose: 
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void bubblesort(int *array, int size);
void print(int *array, int size);
void fillArray(int *array, int size );
void swapVal(int &a, int &b);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(time(0));
    //Declare Variables
    int size;
    //Initialize Variables
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    
    fillArray( array, size ); // Dynamically allocate at runtime

    //Map/Process the Inputs -> Outputs

    //Display Inputs/Outputs
    cout << "Unsorted array: ";
    print(array, size); // Display unsorted array
    cout << endl;
    
    bubblesort(array, size); // Perform selection sort
    cout << "Sorted array: ";
    print(array, size); // Display sorted array
    cout << endl;

    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void fillArray( int *array, int size ) {
    for (int i = 0; i < size; i++) {
        *(array + i ) = rand() % 100; // Random values between 0 and 99
    }
}

void bubblesort( int *array, int size ) {
    bool swapped;
    int pass = 0; // Initialize pass counter
    do {
        swapped = false;
        for (int i = 0; i < size - 1; i++) {
            if ( *( array + i ) > *( array + i + 1 )) {
                swapVal( *( array + i), *( array + i + 1 ) );
                swapped = true;
            }
        }
        size--; // Reduce the size for the next pass
    } while (swapped);
}

void print( int *array, int size ) {
    for (int i = 0; i < size; i++) {
        cout << *( array + i ) << " ";
    }
    cout << endl;
}

void swapVal( int &a, int &b ) {
    int temp = a;
    a = b;
    b = temp;
}