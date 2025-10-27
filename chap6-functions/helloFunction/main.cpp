/* 
 * Author: Michael Risher
 * Purpose: hello world function
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions


//Function Prototypes
void display();

//Execution begins here at main
int main(int argc, char** argv) {
    cout << "Hello from main" << endl;
    display();
    cout << "Back to main function" << endl;
    return 0;
}

void display(){
    cout << "Hello from display function" << endl;
}