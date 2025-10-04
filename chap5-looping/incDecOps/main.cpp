/*
Author: Michael Risher
Purpose: play with the incrementor and dec in postfix and prefix form
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
    int a, b, c;
    //initialize variables
    a = 0;
    b = 5;
    c = 10;
    //map/process the inputs -> outputs

    //display input/outputs
    cout << "a started out at : " << a << endl;
    a++;
    cout << "a is: " << a << endl;
    cout << "a is: " << a++ << endl; //using postfix so it will add 1 after it uses the value of a being 1
    cout << "a is: " << a << endl; //then you can see that change here 
    cout << endl;
    
    cout << "b started out at : " << b << endl;
    cout << "b is: " << ++b << endl; //prefix which changes the value before it uses it
    cout << "b is: " << b << endl; //just to prove we didn't lie
    cout << endl;

    cout << "c started out at : " << c << endl;
    cout << "c is " << (--c)++ << endl;
    cout << "c is " << c << endl;
    cout << "c is " << (c+=500) << endl;

    //clean up memory, close files

    //exit the program
    return 0;
}
