/*
Author: Michael Risher
Purpose: using loops to do factorial numbers
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
    int num;
    unsigned long long result;
    //initialize variables
    //get num from the user
    //validate the number we asked for
    num = 0;
    do{
        cout << "Enter a non zero positive number to find the factorial of: ";
        cin >> num;
    } while( num <= 0 );

    //compared to while
    // cout << "Enter a non zero positive number to find the factorial of: ";
    // cin >> num;

    // while( num <= 0 ){
    //     cout << "Can't be that value" << endl;
    //     cout << "Enter a non zero positive number to find the factorial of: ";
    //     cin >> num;
    // }
    result = 1;

    //map/process the inputs -> outputs
    //5! cant do that to find the answer
    //need to loop the multiplication
    //for( counter; test; increment/decrement ){}
    for( int counter = 1; counter == 5 || counter <= num; counter++ ){
        result = result * counter;
    }
    //end for

    //display input/outputs
    cout << "From the for loop" << endl;
    cout << num << "! = " << result << endl;
    
    
    //make it with while loops
    result = 1;
    int whileCounter = 1;
    while( whileCounter <= num ){
        result *= whileCounter; //1*2*3*4*....num
        whileCounter++; //increment after
    }

    cout << "From the while loop" << endl;
    cout << num << "! = " << result << endl;

    //exit the program
    return 0;
}
