/* 
 * Author: Michael Risher
 * Purpose: make a bogosort algorithm
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <thread>
#include <sstream>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void bogoSort(int array[], int size);
bool isSorted(int array[], int size);
void shuffle(int array[], int size);
void fillArray(int array[], int size, bool random);
void print(int array[], int size);
void print( ostream &out, int array[], int size ); // Overloaded print function
void swapVal(int &a, int &b);

void bubblesort( int array[], int size ) {
    stringstream ss;
    for( int pass = 0; pass < size - 1; pass++ ) {
        // cout << "Pass " << (pass + 1) << ": ";
        cout << "\r";
        print( ss, array, size ); // Display current state of the array
        ss << endl;
        print( array, size ); // Display current state of the array;
        this_thread::sleep_for(chrono::milliseconds(500)); // Sleep for 100 milliseconds
        cout << flush; 
        for (int i = 0; i < size - 1; i++) {
            if (array[i] > array[i + 1]) {
                swapVal(array[i], array[i + 1]);
            }
        }
    }
    cout << "\n\nFull Sequence\n" << ss.str(); // Print the accumulated output
}

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand( time( 0 ) );
    //Declare Variables
    int size;
    //Initialize Variables
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size]; // array for sorting
    fillArray(array, size, false); // Fill with random values
    //Map/Process the Inputs -> Outputs
    

    cout << "Unsorted array: ";
    print(array, size); // Display unsorted array
    cout << endl << endl;
    // Perform selection sort

    bubblesort(array, size); // Perform selection sort
    // bogoSort(array, size); // Perform selection sort
    cout << endl;
    cout << "Sorted array: ";
    print(array, size); // Display sorted array
    cout << endl;
    
    //Exit the Program
    return 0;
}

void bogoSort(int array[], int size) {
    while (!isSorted(array, size)) {
        cout << "\r";
        print(array, size); // Display current state of the array
        this_thread::sleep_for(chrono::milliseconds(1000)); // Sleep for 100 milliseconds
        cout << flush; // Ensure output is displayed immediately
        shuffle(array, size);
    }
}

bool isSorted(int array[], int size) {
    for (int i = 1; i < size; i++) {
        if (array[i] < array[i - 1]) {
            return false;
        }
    }
    return true;
}

void shuffle(int array[], int size) {
    for (int i = 0; i < size; i++) {
        int j = rand() % size; // Random index
        swapVal(array[i], array[j]); // Swap elements
    }
}

void fillArray( int array[], int size, bool random ) {
    for (int i = 0; i < size; i++) {
        if( random )
            array[i] = rand() % 100; // Random values between 0 and 99
        else
            array[i] = size - i; // Sequential values
    }
}


void print( ostream &out, int array[], int size ) {
    for (int i = 0; i < size; i++) {
        out << array[i] << " ";
    }
}

void print( int array[], int size ) {
    print( cout, array, size ); // Print to standard output
}

void swapVal( int &a, int &b ) {
    int temp = a;
    a = b;
    b = temp;
}