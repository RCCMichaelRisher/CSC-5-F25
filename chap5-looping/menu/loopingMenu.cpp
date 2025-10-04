/*
Author: Michael Risher
Purpose: menu with loop. such wow
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
    short choice;
    //initialize variables

    do{
        cout << endl << "Homework Menu" << endl;
        cout << "Enter 1 for problem 1" << endl;
        cout << "Enter 2 for problem 2" << endl;
        cout << "Enter 3 for problem 3" << endl;
        cout << "Enter 4 for problem 4" << endl;
        cout << "Enter -1 to exit" << endl;

        //get the input
        cin >> choice;
        //invalid with an if in the before before time.
        //i can loops now weee

        switch( choice ){
            case 1: { 
                break; 
            }
            case 2: { 
                break; 
            }
            case 3: { 
                break; 
            }
            case 4: { 
                break; 
            }
            default: 
                cout << "Exiting menu. Goodbye" << endl;
                break;
        }


    } while( choice != -1 );
    //map/process the inputs -> outputs

    //display input/outputs

    //clean up memory, close files

    //exit the program
    return 0;
}
