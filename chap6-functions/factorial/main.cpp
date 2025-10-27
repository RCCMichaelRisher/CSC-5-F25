/* 
 * Author: Michael Risher
 * Purpose: factorial with functions non recursive
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
int getNumber( int minNum);
int fact( int userNum );

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int n; //do the factorial of n
    int factorial; // the answer 
    //Initialize Variables
    n = getNumber( 1 );
    factorial = 1;
    
    //Map/Process the Inputs -> Outputs
    factorial = fact( n );
    //Display Inputs/Outputs

    cout << n << "! is " << factorial << endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

int getNumber( int minNum ){
    int n; //temp number for user to fill
    cout << "Enter a number greater than " << minNum << "\n> ";
    cin >> n;

    while( n < minNum ){ //inclusive of minNum
        cout << "Enter a greater than " << minNum << ". can't you read!!\n> ";
        cin >> n;
    }

    return n;
}

int fact( int n ){
    int result = 1;

    //calculate with a loop
    for( int i = 1; i <= n; i++ ){
        result = result * i; //1*2*3*4*....*n
    }
    

    return result;
}