/* 
 * Author: Michael Risher
 * Purpose: create a deck of cards and shuffle them using an index to shuffle them
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constants
const int DECK_SIZE = 52;
const int HAND_SIZE = 5;

//Function Prototypes
void generateDeck(string face[], string suit[], int index[]);
void shuffleDeck(int index[], int size);
void printCard(const string face[], const string suit[], int idx);
void pickCard(string face[], string suit[], int index[], int idx);

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare Variables
    string face[DECK_SIZE] = {
        "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K",
        "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K",
        "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K",
        "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"
    };
    string suit[DECK_SIZE];
    int index[DECK_SIZE];

    generateDeck(face, suit, index);

    //Shuffle the deck using the index array
    shuffleDeck(index, DECK_SIZE);

    //Draw 5 cards for the player (no duplicates since deck is shuffled)
    cout << "Your hand:" << endl;
    for (int i = 0; i < DECK_SIZE; i++) {
        pickCard( face, suit, index, index[i]);
        // printCard(face, suit, index[i]);
    }

    for (int i = 0; i < DECK_SIZE; i++) {
        pickCard( face, suit, index, index[i]);
        // printCard(face, suit, index[i]);
    }

    return 0;
}

void generateDeck(string face[], string suit[], int index[]) {
    string possibleSuits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string possibleFaces[] = {
        "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"
    };
    for( int i = 0; i < 4; i++) {
        //fill the faces array
        for (int j = 0; j < 13; j++) {
            face[i * 13 + j] = possibleFaces[j];
            suit[i * 13 + j] = possibleSuits[i];
        }
    }

    // Initialize the deck with faces and suits
    for (int i = 0; i < DECK_SIZE; i++) {
        index[i] = i;
    }
}

void shuffleDeck(int index[], int size) {
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        // Swap index[i] and index[j]
        int temp = index[i];
        index[i] = index[j];
        index[j] = temp;
    }
}

void printCard( const string face[], const string suit[], int idx ) {
    cout << face[idx] << " of " << suit[idx] << endl;
}

void pickCard( string face[], string suit[], int index[], int idx ) {
    static int pickedCards = 0;
    if (pickedCards < DECK_SIZE) {
        printCard(face, suit, idx);
        pickedCards++;
    } else {
        cout << "No more cards can be picked." << endl;
        cout << "Reshuffling the deck..." << endl;
        shuffleDeck(index, DECK_SIZE);
        pickedCards = 0;
    }
}