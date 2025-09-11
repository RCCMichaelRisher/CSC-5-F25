/*
Author: Michael Risher
Purpose: calculating BMI 
*/

//system libraries
#include <iostream>  //input/output library
#include <iomanip>  //formater library
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension
const float LBS_KG = 0.4535923f;
const float IN_M = 0.0254f;
//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    float weight, height, bmi;

    //initialize variables
    cout << "Enter your weight in lbs: ";
    cin >> weight;

    cout << "Enter your height in inches: ";
    cin >> height;
    
    //map/process the inputs -> outputs
    //convert lbs to kgs 
    weight = weight * LBS_KG;
    //height to m
    height = height * IN_M;

    bmi = weight / ( height * height );  // weight / pow( height, 2)

    //display input/outputs
    cout << "Your weight in kg is: " << setw( 6 ) << weight << endl;
    cout << "Your height in m is : " << setw( 6 ) << height << endl;
    cout << "Your BMI is : " << setw( 6 ) << bmi << endl;
    //clean up memory, close files

    //exit the program
    return 0;
}
