/*
Author: Michael Risher
Purpose: gaddis chapter 3 problem 11 write a program that acts as a math tutor
*/

//system libraries
#include <iostream>  //input/output library
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed
    srand( time( 0 ) );
    //declare variables
    float num1, num2, answer, userAns;
    int diff;
    char op;

    //initialize variables
    cout << "Welcome to the math tutor" << endl;
    cout << "What difficulty do you want (1-3)" << endl;
    cin >> diff;
    cout << "What operation do you want to do (+,-,*,/,%)" << endl;
    cin >> op;

    //pick our numbers
    switch( diff ){
        case 1: {
            //easy
            num1 = rand() % 10; //0-9
            num2 = rand() % 10;
            break;
        }
        case 2: {
            num1 = rand() % 900 + 100; //100-999
            num2 = rand() % 900 + 100;
            break;
        }
        case 3: {
            num1 = rand() % 9000 + 1000; //1000-9999
            num2 = rand() % 9000 + 1000;
            break;
        }

    }

    //out put the problem
    cout << setw( 5 ) << num1 << endl;
    cout << op << setw( 4 ) << num2 << endl;

    cin >> userAns;
    //calulate the right answer
    if( op == '+'){
        answer = num1 + num2;
    }
    else if( op == '-' ){
        answer = num1 - num2;
    }
    else if( op == '*' ){
        answer = num1 * num2;
    }
    else if( op == '/' ){
        answer = num1 / num2;
    }
    // else if( op == '%' ){
    //     answer = num1 % num2;
    //     FMOD
    // }

    //map/process the inputs -> outputs

    //display input/outputs
    //test if they got it right and display it
    if( userAns == answer ){
        cout << "That is correct" << endl;
    } else {
        cout << "Nope thats wrong. It is " << answer << endl;
    }


    //clean up memory, close files

    //exit the program
    return 0;
}
