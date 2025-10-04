/*
Author: Michael Risher
Purpose: shuffle the cards from a file
*/

//system libraries
#include <iostream>  //input/output library
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed
    srand( time( 0 ) ); //set the rand seed
    
    //declare variables
    fstream deck;
    fstream shuffled;
    const short deckSize = 52;

    //initialize variables
    shuffled.open( "shuffled.txt", ios::out ); //output mode for fstream

    //map/process the inputs -> outputs
    int cardsLeft = deckSize; //copy deck size to pull from
    for( int card = 0; card < deckSize; card++ ){
        deck.open( "cards.txt", ios::in ); //set the fstream to read in the file

        //make sure it opened
        if( !deck.is_open() ){
            cout << "Cant load cards.txt" << endl;
            return 1;
        }

        fstream temp( "temp.txt", ios::out ); //write the cards to here 
        char suit, faceVal;
        //pick my card that want "shuffle"
        int randCard = rand() % cardsLeft;
        int count = 0;//cards read so far
        //start reading the file now
        while( deck >> faceVal >> suit ){
            if( count == randCard ){
                //we picked the shuffled card
                shuffled << faceVal << suit << endl;
                cout << faceVal << suit << endl;
            } else {
                //didn't get pick but we want to move to the temp file
                temp << faceVal << suit << endl;
            }
            count++; //increment 
        }
        cardsLeft--; //remove a card from our cards left
        //close the files
        temp.close();
        deck.close();
        //rename the temp to cards.txt
        remove( "cards.txt" );
        rename( "temp.txt", "cards.txt" );
    }

    //display input/outputs

    //clean up memory, close files

    //exit the program
    return 0;
}
