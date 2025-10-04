/*
Author: Michael Risher
Purpose: basics into file io
*/

//system libraries
#include <iostream>  //input/output library
#include <fstream> //file io library contains ifstream, ofstream & fstream
#include <iomanip> //format
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
    string name, address, city, state, filename;
    int zip;
    float grade;
    char initial;

    ofstream outfile;

    //initialize variables
    cout << "Enter the filename you want to store this data: ";
    getline( cin, filename );

    cout << "Enter your name: ";
    getline( cin, name );

    cout << "Enter the address: ";
    getline( cin, address );

    cout << "Enter the city: ";
    getline( cin, city );

    cout << "Enter the state: ";
    getline( cin, state );

    cout << "Enter the zip code: ";
    cin >> zip;

    cout << "Enter a grade: ";
    cin >> grade;

    cout << "Enter a initial: ";
    cin >> initial;

    //attempt the file
    outfile.open( filename );
    //test the file opened
    if( !outfile ){ //if it did not open tell the user
        cout << "Invalid file could not open" << endl;
        return 1; //end the program with return code 1 for error
    }

    //map/process the inputs -> outputs

    //display input/outputs
    //write to the file
    outfile << "name: " << name << endl;
    outfile << "address: " << address << endl;
    outfile << "city: " << city << endl;
    outfile << "state: " << state << endl;
    outfile << "zip: " << zip << endl;
    outfile << "grade: " << fixed << setprecision( 2 ) << grade << endl;
    outfile << "initial: " << initial << endl;


    //clean up memory, close files
    outfile.close(); //close the open output file

    //exit the program
    return 0;
}
