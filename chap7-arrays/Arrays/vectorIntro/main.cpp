#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Introduction to vectors in C++

    // Static arrays have a fixed size determined at compile time
    int staticArray[5] = {1, 2, 3, 4, 5};
    cout << "Static array elements: ";
    for(int i = 0; i < 5; ++i) {
        cout << staticArray[i] << " ";
    }
    cout << endl;

    // Vectors are dynamic arrays from the C++ Standard Library
    vector<int> dynamicVector = {1, 2, 3, 4, 5};
    cout << "Vector elements: ";
    for(int i = 0; i < dynamicVector.size(); ++i) {
        cout << dynamicVector[i] << " ";
    }
    cout << endl;

    // Show initial size and capacity
    cout << "Initial vector size: " << dynamicVector.size() << endl;
    cout << "Initial vector capacity: " << dynamicVector.capacity() << endl;

    // Vectors can grow in size at runtime
    dynamicVector.push_back(6); // Add an element to the end
    cout << "After push_back(6), vector elements: ";
    for(int i = 0; i < dynamicVector.size(); ++i) {
        cout << dynamicVector[i] << " ";
    }
    cout << endl;
    cout << "Vector size after push_back: " << dynamicVector.size() << endl;
    cout << "Vector capacity after push_back: " << dynamicVector.capacity() << endl;

    // Vectors can shrink in size at runtime
    dynamicVector.pop_back(); // Remove the last element
    cout << "After pop_back(), vector elements: ";
    for(int i = 0; i < dynamicVector.size(); ++i) {
        cout << dynamicVector[i] << " ";
    }
    cout << endl;
    cout << "Vector size after pop_back: " << dynamicVector.size() << endl;
    cout << "Vector capacity after pop_back: " << dynamicVector.capacity() << endl;

    // Summary:
    // - Static arrays: fixed size, simple, fast, but not flexible
    // - Vectors: dynamic size, flexible, easy to use, part of <vector> library

    return 0;
}