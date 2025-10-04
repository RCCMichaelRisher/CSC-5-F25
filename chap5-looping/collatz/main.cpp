/*
Author: Michael Risher
Purpose: collatz conjecture
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
    int num; //user num
    int counter; //count iterations

    //initialize variables
    do{
        cout << "Enter a positive number greater than 0: ";
        cin >> num;
    } while ( num < 1 );


    counter = 0;

    //map/process the inputs -> outputs
    while( num != 1 ){
        //even odd test
        if( num % 2 == 0 ){//even
            num = num / 2;
        } else { //not even
            //3n + 1
            num = 3 * num + 1;
        }
        counter++; //count the iterations
        cout << num << endl;
    }
    cout << endl;

    //display input/outputs
    cout << "It took " << counter << " times to reach 1" << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
