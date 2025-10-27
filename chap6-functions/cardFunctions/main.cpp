/* 
 * Author: Michael Risher
 * Purpose: make a deck of cards and shuffle them by index them display them in a hand sorted index number
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <string>
#include <fstream>
#include <sstream> //string stream
#include <ctime> //time
#include <cstdlib> //rand
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const unsigned short DECK_SIZE = 52;

//Function Prototypes
bool checkDeckExists( const string );
void createDeck( const string );
void draw5( const string );
int pickCard( int c1 = 99, int c2 = 99, int c3 = 99, int c4 = 99 );
void orderCards( int &c1, int &c2, int &c3, int &c4, int &c5 );
void swapCard( int &x, int &y );
void pullCards( const string file, int c1, int c2, int c3, int c4, int c5);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand( time( 0 ) );
    //Declare Variables
    //Initialize Variables
    string cardFile = "cards.txt";
    
    
    //Map/Process the Inputs -> Outputs
    
    //see if there is a file for cards
    if( !checkDeckExists( cardFile ) ){
        //if not make it
        createDeck( cardFile );
    }
    //shuffle/draw5
    draw5( cardFile );
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}


//check if the file exists
bool checkDeckExists( const string file ){
    ifstream inFile( file ); // doing the same thing as inFile.open( file );
    if( inFile.is_open() ){
        inFile.close();
        return true;
    }
    inFile.close();
    return false;    
}

void createDeck( const string file ){
    cout << "No deck found. Creating new one." << endl;
    //open our output file
    ofstream outFile( file ); //same as doing outFile.open( file );

    string card;

    if( outFile.is_open() ){
        //suitface file format
        

        for( int cardNum = 0; cardNum < DECK_SIZE; cardNum++ ){
            stringstream ss;
            //suit of the card
            //deck order
            //Clubs, Diamonds, Hearts, and Spades
            if( cardNum / 13 == 0){
                card = "Clubs";
            } else if ( cardNum / 13 == 1 ){
                card = "Diamonds"; 
            } else if ( cardNum / 13 == 2 ) {
                card = "Hearts";
            } else {
                card = "Spades";
            }

            //facevalue
            int modVal = cardNum % 13;
            // card += to_string( modVal ); // cant simply add an int to a string. have to_string it first //C++11

            ss << card;
            if( modVal == 0 ) ss << "Ace";
            else if( modVal == 10) ss << "Jack";
            else if( modVal == 11 ) ss << "Queen";
            else if( modVal == 12 ) ss << "King";
            else {
                ss << ( modVal + 1 ) ; //putting your stuff into the stream  //anything else it'll work
            }
            card = ss.str(); //taking it all out as nice new string

            //print the card to the file
            outFile << card << endl;
        }
    }

    outFile.close();
}

void draw5( const string file ){
    //declare hand
    int c1 = 0, c2 = 0, c3 = 0 , c4 = 0, c5 = 0;
    int dummy = 99;

    //pick unique card
    c1 = pickCard();

    //pick unique card
    c2 = pickCard( c1 );
    //sort all cards
    orderCards( c1, c2, dummy, dummy, dummy );

    //pick unique card
    c3 = pickCard( c1, c2 );
    //sort all cards
    orderCards( c1, c2, c3, dummy, dummy );

    //pick unique card
    c4 = pickCard( c1, c2, c3 );
    //sort all cards
    orderCards( c1, c2, c3, c4, dummy );

    //pick unique card
    c5 = pickCard( c1, c2, c3, c4 );
    //sort all cards
    orderCards( c1, c2, c3, c4, c5 );

    cout << c1 << " " << c2 << " " << c3 << " " << c4 << " "<< c5 << endl;

    //pull the cards out the file and display em
    pullCards( file, c1, c2, c3, c4, c5 );
}

void pullCards( const string file, int c1, int c2, int c3, int c4, int c5){
    string cardStr;

    ifstream inFile( file );
    int cardCount = 0;
    while( getline( inFile, cardStr ) ){ //reads line by line till the file is done
        cardCount++; 
        if( cardCount == c1 || cardCount == c2 || cardCount == c3 ||
            cardCount == c4 || cardCount == c5 
        ){
            cout << "Card: " << cardStr << " @ index " << cardCount << endl;
        }
    }
    inFile.close();
}

//picks a unique that havent drawn yet
int pickCard( int c1, int c2, int c3, int c4 ){
    int card;
    do{
        card = rand() % DECK_SIZE + 1; // [1-52]
    } while( card == c1 || card == c2 || card == c3 || card == c4 );
    return card;
}

void orderCards( int &c1, int &c2, int &c3, int &c4, int &c5 ){
    if( c4 > c5 ){
        swapCard( c4, c5 );
    }
    if( c3 > c4 ){
        swapCard( c3, c4 );
    }
    if( c2 > c3 ){
        swapCard( c2, c3 );
    }
    if( c1 > c2 ){
        swapCard( c1, c2 );
    }
}


void swapCard( int &x, int &y ){
    int temp = x;
    x = y;
    y = temp;
}



