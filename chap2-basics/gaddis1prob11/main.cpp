/*
Author: Michael Risher
Purpose: how far can you drive on a tank of gas doing 80% hwy and 20% town driving
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
    float mpgH, mpgT, mpgCombined; //high and town mpgs //23.5 town
    int tank; //tank size
    float dist, distH, distT; //distance for town highway and total

    //percentages 
    float percentH, percentT; //percent we drive in highway and town

    //initialize variables
    cout << "Enter your highway mpg: ";
    cin >> mpgH; //user entered highway mpg
    
    cout << "Enter town mpg: ";
    cin >> mpgT; //user entered town mpg

    cout << "What is your tank size: ";
    cin >> tank; //user entered tank size

    cout << "what percent do you drive on the highway (percent): ";
    cin >> percentH; //user entered highway driving

    cout << "what percent do you drive in the town (percent)";
    cin >> percentT;

    //user entered a percent in the human form not in computer form
    percentH /= 100; //percentH = percentH / 100
    percentT /= 100; //percentT = percentT / 100

    //map/process the inputs -> outputs
    distH = tank * mpgH; //calculate distance for highway
    distT = tank * mpgT; //calculate distance for town
    //combined mpg
    mpgCombined = ( mpgH * percentH ) + ( mpgT * percentT );
    //total distance using 80% hwy and 20% town
    dist = mpgCombined * tank;

    //display input/outputs
    cout << "The Car can travel " << distH << " miles if only driving highway" << endl;
    cout << "The Car can travel " << distT << " miles if only driving in town" << endl;
    cout << "The car can travel " << dist << " miles if driving " << percentH * 100 << "% highway and " << percentT * 100 << "% town" << endl;

    //clean up memory, close files

    //exit the program
    return 0;
}
