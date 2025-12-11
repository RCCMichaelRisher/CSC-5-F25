#include <iostream>

using namespace std;

int main() {
    int size;

    // Ask user for the size of the array
    cout << "Enter the number of elements: ";
    cin >> size;

    // Dynamically allocate an array of integers
    int* arr = new int[size];

    // Input elements
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Output elements
    cout << "You entered: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}