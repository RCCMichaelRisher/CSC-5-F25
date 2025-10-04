/*
Author: Michael Risher
Purpose: fill a deck of cards to a file
*/

//system libraries
#include <iostream>  //input/output library
#include <fstream> //file lib
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    fstream file;
    const short deckSize = 52;
    char suit;
    char faceVal;

    //initialize variables
    file.open( "cards.txt", ios::out ); //open an fstream in output mode
   

    //map/process the inputs -> outputs
    for( int i = 0; i < deckSize; i++ ){
        //size the deck is 52 and i have 4 suits i can divide 52 by 4 and get 13
        switch( i / 13 ){
            case 0: suit = 'H'; break;
            case 1: suit = 'D'; break;
            case 2: suit = 'C'; break;
            case 3: suit = 'S'; break;
        }

        char modVal = i % 13; //determine the face val from the incrementer
        if( modVal == 0 ) faceVal = 'A';
        else if( modVal == 9 ) faceVal = 'T';
        else if( modVal == 10 ) faceVal = 'J';
        else if( modVal == 11 ) faceVal = 'Q';
        else if( modVal == 12 ) faceVal = 'K';
        else faceVal = (modVal + 1) + 48;  //2-9 //need to add one since i start i at 0

        file << faceVal << suit << endl;
        cout << faceVal << suit << endl;
    }


    //display input/outputs

    //clean up memory, close files
    file.close();
    //exit the program
    return 0;
}
