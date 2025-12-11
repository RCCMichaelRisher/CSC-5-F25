#include <iostream>
using namespace std;

int main() {
    int nums[] = {10, 20, 30, 40, 50};  // Declare and initialize an array
    int* ptr = nums;  // Point to the first element of the array

    cout << "Accessing array elements using index:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "nums[" << i << "] = " << nums[i] << endl;
    }

    cout << "\nAccessing array elements using pointer arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "*(ptr + " << i << ") = " << *(ptr + i) << endl;
    }

    cout << "\nAddresses of each array element:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "&nums[" << i << "] = " << &nums[i] 
             << " == (ptr + " << i << ") = " << (ptr + i) << endl;
    }

    return 0;
}