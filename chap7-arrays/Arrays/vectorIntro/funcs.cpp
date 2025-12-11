#include <iostream>
#include <vector>

using namespace std;

// Function to fill a static array
void fillStaticArray(int arr[], int size) {
    for(int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }
}

// Function to fill a vector
void fillVector(vector<int>& vec, int size) {
    vec.clear();
    for(int i = 0; i < size; ++i) {
        vec.push_back(i + 1);
    }
}

// Function to print a static array (requires explicit size)
void printStaticArray(const int arr[], int size) {
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to print a vector (size is part of the vector)
void printVector(const vector<int>& vec) {
    for(int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    // Introduction to vectors in C++ using functions

    // Static arrays have a fixed size determined at compile time
    int staticArray[5];
    fillStaticArray(staticArray, 5);
    cout << "Static array elements: ";
    printStaticArray(staticArray, 5);

    // Vectors are dynamic arrays from the C++ Standard Library
    vector<int> dynamicVector;
    fillVector(dynamicVector, 5);
    cout << "Vector elements: ";
    printVector(dynamicVector);

    // Show initial size and capacity
    cout << "Initial vector size: " << dynamicVector.size() << endl;
    cout << "Initial vector capacity: " << dynamicVector.capacity() << endl;

    // Vectors can grow in size at runtime
    dynamicVector.push_back(6); // Add an element to the end
    cout << "After push_back(6), vector elements: ";
    printVector(dynamicVector);
    cout << "Vector size after push_back: " << dynamicVector.size() << endl;
    cout << "Vector capacity after push_back: " << dynamicVector.capacity() << endl;

    // Vectors can shrink in size at runtime
    dynamicVector.pop_back(); // Remove the last element
    cout << "After pop_back(), vector elements: ";
    printVector(dynamicVector);
    cout << "Vector size after pop_back: " << dynamicVector.size() << endl;
    cout << "Vector capacity after pop_back: " << dynamicVector.capacity() << endl;

    // Summary:
    // - Static arrays: fixed size, simple, fast, but not flexible
    // - Vectors: dynamic size, flexible, easy to use, part of <vector> library
    // - Passing static arrays to functions requires explicit size parameter
    // - Passing vectors to functions is simpler and safer

    return 0;
}