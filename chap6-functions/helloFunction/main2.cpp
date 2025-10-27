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

//function prototypes
int display( string name, int age, int lNum );


//Execution begins here at main
int main(int argc, char** argv) {
    cout << "Hello from main" << endl;
    int age = 32;
    int returnCodeDis = display( "michael", age, 5 );
    cout << "My return code was " << returnCodeDis << endl;
    cout << "Back to main function" << endl;
    return 0;
}


int display( string name, int age, int l ){
    cout << "Hello " << name << " - " << age << " from display function" << l << endl;
    return 74;
}
