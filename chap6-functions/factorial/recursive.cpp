/* 
 * Author: Michael Risher
 * Purpose: do the factorial but by recursion aka function calling itself
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
int getNum(); //gets number from the user
int fact( int ); //factorial function

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int n;
    int factorial = 1;

    
    //Initialize Variables
    n = getNum();
    
    //Map/Process the Inputs -> Outputs
    factorial = fact( n ); //use the function

    //Display Inputs/Outputs
    cout << "Factorial is : " << factorial << endl; 
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}
int fact( int n ){
    static int functionCalls = 0;
    cout << "fn call(" << functionCalls++ << ") n = " << n << endl;
    if( n == 0 || n == 1 ){
        //stop case aka base case
        cout << "\tfn call(" << functionCalls << ") return 1" << endl;
        return 1;
    } else {

        //fact( n - 1 ) needs to be run first to get a value;
        int temp = fact( n - 1 );
        cout << "\tfn call(" << functionCalls << ") n = " << n << " temp = " << temp << endl;
        return n = n * temp;
    }
}

int getNum(){
    int n;
    do{ //validate n
        cout << "Enter a number greater than 0\n> ";
        cin >> n;
    } while ( n < 0 );

    return n;
}