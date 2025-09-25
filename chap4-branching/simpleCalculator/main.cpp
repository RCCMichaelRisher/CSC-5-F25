/*
Author: Michael Risher
Purpose: program for a simple calculator that can do +,-,/,*
*/

//system libraries
#include <iostream>  //input/output library
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    float num1, num2; //user input numbers
    char op; //cant use operator as the variable because it is reserved
    float result;
    //initialize variables
    //user input to fill variables
    cout << "Enter two numbers (x y): ";
    cin >> num1 >> num2;

    cout << "What operation do you want to do (+, -, *, /): ";
    cin >> op;
    
    //map/process the inputs -> outputs
    //check what sign they picked
    if( op == '+' ){
        result = num1 + num2;  
    }
    if( op == '-' ){
        result = num1 - num2;
    }
    if ( op == '*') {
        result = num1 * num2;
    } 
    if( op == '/' ) {
        //it is division
        if( num2 != 0 ){  //num2 is not equal to 0 then....
            result = num1 / num2;
        } else {
            //if num2 == 0
            cout << "Cant divide by 0 dummy!!" << endl;
            result = 0;
        }
        
    }
    

    //display input/outputs
    cout << num1 << op << num2 << " = " << result << endl;

    //clean up memory, close files

    //exit the program
    return 0;
}
