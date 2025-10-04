/*
Author: Michael Risher
Purpose: pick 5 cards and sort them in hand smallest to largest 
*/

//system libraries
#include <iostream>  //input/output library
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed
    srand( time( 0 ) ); //seeding the rands

    //declare variables
    //pick 5 card numbers
    short cn1, cn2, cn3, cn4, cn5;
    //string to print the card
    string card1, card2, card3, card4, card5;

    fstream deck;
    const short deckSize = 52;
    //initialize variables

    deck.open( "cards.txt", ios::in ); //input mode for fstream

    //check it opened
    if( !deck.is_open() ){
        cout << "couldn't load cards from file" << endl;
        return 1;
    }

    //pick card 1 &2
    cn1 = rand() % deckSize;
    do{
        cn2 = rand() % deckSize;
    } while( cn1 == cn2 );//keep making rand nums for cn2 until its the same as cn1

    //order the cards
    if( cn1 > cn2 ){ 
        //swap cn1 and cn2
        short temp = cn1;
        cn1 = cn2;
        cn2 = temp;
    }

    //pick card 3 
    do{
        cn3 = rand() % deckSize;
    } while( cn1 == cn3 || cn2 == cn3 );//keep making rand nums for cn3 till its unique

    if( cn2 > cn3 ){
        short temp = cn2;
        cn2 = cn3;
        cn3 = temp;
    } 
    if( cn1 > cn2 ){
        short temp = cn1;
        cn1 = cn2;
        cn2 = temp;
    }


    //pick card 4 
    do{
        cn4 = rand() % deckSize;
    } while( cn1 == cn4 || cn2 == cn4 || cn3 == cn4 );//keep making rand nums for cn3 till its unique

    if( cn3 > cn4 ){
        short temp = cn3;
        cn3 = cn4;
        cn4 = temp;
    } 
    if( cn2 > cn3 ){
        short temp = cn2;
        cn2 = cn3;
        cn3 = temp;
    }
    if( cn1 > cn2 ){
        short temp = cn1;
        cn1 = cn2;
        cn2 = temp;
    }

    //pick card 5 
    do{
        cn5 = rand() % deckSize;
    } while( cn1 == cn5 || cn2 == cn5 || cn3 == cn5 || cn4 == cn5 );//keep making rand nums for cn3 till its unique

    if( cn4 > cn5 ){
        short temp = cn4;
        cn4 = cn5;
        cn5 = temp;
    } 
    if( cn3 > cn4 ){
        short temp = cn3;
        cn3 = cn4;
        cn4 = temp;
    } 
    if( cn2 > cn3 ){
        short temp = cn2;
        cn2 = cn3;
        cn3 = temp;
    }
    if( cn1 > cn2 ){
        short temp = cn1;
        cn1 = cn2;
        cn2 = temp;
    }


    cout << cn1 << endl;
    cout << cn2 << endl;
    cout << cn3 << endl;
    cout << cn4 << endl;
    cout << cn5 << endl;

    //map/process the inputs -> outputs

    //go reading in the file and pull those cards
    string readingCard;
    for( int card = 0; card < deckSize; card++ ){
        getline( deck, readingCard );
        if( card == cn1 ) card1 = readingCard;
        if( card == cn2 ) card2 = readingCard;
        if( card == cn3 ) card3 = readingCard;
        if( card == cn4 ) card4 = readingCard;
        if( card == cn5 ) card5 = readingCard;
    }

    //display input/outputs

    //display your hand
    cout << card1 << ", " 
        << card2 << ", "
        << card3 << ", "
        << card4 << ", "
        << card5 << endl;

    //clean up memory, close files
    deck.close();

    //exit the program
    return 0;
}
