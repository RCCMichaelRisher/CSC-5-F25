/*
Author: Michael Risher
Purpose: dice game. the goal is the get the highest score by rolling a pair of dice
*/

//system libraries
#include <iostream>  //input/output library
#include <cstdlib> //old random library
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
    srand( time( 0 ) );
    //declare variables

    int dice1, dice2;
    int score1, score2, winningScore, losingScore;
    string player1, player2, winner;

    int maxNumberOnDice; //the maximum number on a dice
    //initialize variables

    //get the player names
    cout << "What is player 1's name: ";
    getline( cin, player1 );

    cout << "What is player 2's name: ";
    getline( cin, player2 );

    //get what kind dice they are using
    cout << "What sided dice are you using: ";
    cin >> maxNumberOnDice;

    //map/process the inputs -> outputs

    //roll the dice 
    // with just rand() i can get 0 - 32767
    //player 1 rolled
    dice1 = rand() % maxNumberOnDice + 1; //get random number from [1-maxNumberonDice]
    dice2 = rand() % maxNumberOnDice + 1;
    //sum their total
    score1 = dice1 + dice2;

    //player 2 roll
    dice1 = rand() % maxNumberOnDice + 1; //get random number from [1-maxNumberonDice]
    dice2 = rand() % maxNumberOnDice + 1;
    //sum their total
    score2 = dice1 + dice2;

    //cheating a tie to test if it worked
    //score1 = score2;
    
    //ternary operator
    //(condition) ? (if it is true) : (if it was false);
    winner = ( score1 > score2 ) ? player1 : player2; 
    winner = ( score1 == score2 ) ? "Nobody" : winner; //tie check
    winningScore = ( score1 > score2 ) ? score1 : score2;
    losingScore = ( winningScore == score1 ) ? score2 : score1;


    //display input/outputs
    cout << winner << " won with a score of " << winningScore << "!" << endl;
    cout << "which beat the score of " << losingScore << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
