/* 
 * Author: Michael Risher
 * Purpose: program that does area of shapes
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void displayMenu();
void runAreaOn( int shape );
int squareArea();
int rectArea();
//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    
    //Initialize Variables
    
    //Map/Process the Inputs -> Outputs
    displayMenu();
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void displayMenu(){
    int input;
    int maxOptions = 2;
    do{
        cout << "Enter the number for the shape you want\n";
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "> ";
        cin >> input;

        //run the area program
        if( input < maxOptions ){
            runAreaOn( input ); //function call to runAreaOn
        }
    } while ( input <= maxOptions );
  
    
}

void runAreaOn( int shape ){
    switch ( shape) {
        case 1:{
            //square
            cout << "Area of a square is " << squareArea() << endl; 
            break;
        }

        case 2:{
            cout << "Area of a rectanlge " << rectArea() << endl;
        }
        
        default: {
            cout << "No function for that shape. Sorry bro! ";
            break;
        }
    }
    cout << endl << endl;
    return;
}

int squareArea(){
    //ask for sides here
    int input; 

    cout << "Enter the length" << endl;
    cout << "> ";
    cin >> input;

    int area = input * input;
    return area; //return the area to runAreaOn function, or where we called it
}

int rectArea(){
    //ask for sides here
    int len, wid; 

    cout << "Enter the length" << endl;
    cout << "> ";
    cin >> len;

    cout << "Enter the width" << endl;
    cout << "> ";
    cin >> wid;

    int area = len * wid;
    return area; //return the area to runAreaOn function, or where we called it
}