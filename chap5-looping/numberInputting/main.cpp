/*
Author: Michael Risher
Purpose: numbers being read by file wow
*/

//system libraries
#include <iostream>  //input/output library
#include <fstream>
#include <string>
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    ifstream inputFile; //where we want to read from
    string fileName;
    int num; //load numbers from file into this varaible
    float sum;
    
    //initialize variables
    //ask filename
    cout << "Enter a fileName: ";
    getline( cin, fileName );
    sum = 0;

    //map/process the inputs -> outputs
    //actually open the file
    inputFile.open( fileName );

    if( inputFile.is_open() ){
        cout << "File opened\n";
    } else{
        cout << "File didn't open" << endl;
    }

    if( inputFile.good() ){
        inputFile >> num;
        while( inputFile >> num ){
            cout << "Got: " << num << endl;
            sum += num;
        };
        cout << "Sum is " << sum << endl;
    } else {
        //didnt open
        cout << "Error opening file" << endl;
        return 1;
    }

    //display input/outputs

    //clean up memory, close files
    inputFile.close();
    //exit the program
    return 0;
}
