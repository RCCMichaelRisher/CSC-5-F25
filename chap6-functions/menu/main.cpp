/* 
 * Author: Michael Risher
 * Purpose: menu with functions
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void problem1();
void problem2();
void problem3();
void problem4();
char getInput();
void printMenu();

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    //Initialize Variables
    do{
        printMenu();
        
        chose = getInput();

        //pick the problem to run
        switch( chose ){
            //call the function problem1
            case '0': problem1(); break;
            case '1': problem2(); break;
            case '2': problem3(); break;
            case '3': problem4(); break;
        }
    } while( chose >= '0' && chose < '4' );
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void printMenu(){
    cout << endl << "Homework Menu" << endl;
    cout << "0. problem 1" << endl;
    cout << "1. problem 2" << endl;
    cout << "2. problem 3" << endl;
    cout << "3. problem 4" << endl;
    cout << "4 to exit" << endl;
    return;
}


char getInput(){
    char chose;
    cin >> chose;
    return chose;
}

void problem1(){
    cout << "problem 1";
}

void problem2(){
    cout << "problem 2";
}

void problem3(){
    cout << "problem 3";
}

void problem4(){
    cout << "problem 4";
}