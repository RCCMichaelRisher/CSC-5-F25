/*
Author: Michael Risher
Purpose: 
*/

//system libraries
#include <iostream>  //input/output library
#include <string>
#include <fstream>
using namespace std; //using namespace standard

//user libraries

//global constants not variable
//science, math, conversion, dimension

//function prototypes

//execution begins here at main
int main( int argc, char **argv ) {
    //set random number seed

    //declare variables
    int choice; //menu choice
    string fileName; //user named file for both save & load
    string itemName; //user inputted item name for saving shopping lists
    ofstream outFile; //output file variable
    ifstream inFile; //input file variable

    //initialize variables

    //map/process the inputs -> outputs

    //display input/outputs
    do{
        cout << endl;
        cout << "Shopping List Program" << endl;
        cout << "1. Start a new shopping list" << endl;
        cout << "2. Load an existing list" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); //remove the hanging newline(enter) that got left behind

        if( choice == 1 ){ //create shopping list
            cout << "Enter a file name for your shopping list: ";
            getline( cin, fileName );

            outFile.open( fileName );
            //check it didn't error
            if( !outFile ) {
                cout << "Error creating file " << fileName << " for shopping list" << endl;
                return 1;
            }

            cout << "Enter items for your shopping list (type 'done' to finish)" << endl;
            do{
                cout << "item: ";
                getline( cin, itemName );
                outFile << itemName << endl;

                cout << "Enter another item? (type 'done' to finish or enter to continue)" << endl;
                getline( cin, itemName );
            } while( itemName != "done" );

            outFile.close();
            cout << "Shopping list save to " << fileName << endl;
        } 
        else if( choice == 2 ) { //load an existing list
            //declare variables for load list
            int checkoff;
            int index;

            cout << "Enter the file name of your shopping list you want to open" << endl;
            getline( cin, fileName );

            inFile.open( fileName );
            //test there were no errors opening that file
            if( !inFile ){
                cout << "Error opening " << fileName << endl;
                return 1; //kill the progam with a bad error
            }

            cout << "Your shopping list:" << endl;
            index = 1; //local only to this scope keep a number count of the items
            while( getline( inFile, itemName ) ){
                //printed the shopping list
                cout << index << ". " << itemName << endl;
                index++;
            }

            //close the file
            inFile.close();

            //check off items off the list
            do{
                cout << "Enter the number of the item to check it off the list (type 0 to finish)" << endl;
                cin >> checkoff; //what item to check off
                cin.ignore(); //clear the buffer of newlines

                inFile.open( fileName );
                //make a temp file to put the new updated list into
                outFile.open( "temp.txt" );
                if( !outFile.is_open() ){ //if it did not open we need to stop
                    cout << "Error opening the temp" << endl;
                    return 1;
                }

                index = 1;
                while( getline( inFile, itemName ) ){ //reads from the shopping file line by line
                    if( index != checkoff ){
                        outFile << itemName << endl; //puts the everything but the checked item into the temp file
                    }
                    index++;
                }

                //close the temp file
                outFile.close();
                //close in file //temp
                inFile.close();

                //remove the outdated shopping file
                remove( fileName.c_str() );
                //rename temp file to the new shopping list file fileName
                rename( "temp.txt", fileName.c_str() );

                //updated list
                cout << "Updated List" << endl;
                
                inFile.open( fileName );

                index = 1; //restart my index for the user to type what they want to remove
                while( getline( inFile, itemName ) ) {
                    cout << index++ << ". " << itemName << endl;
                }

                inFile.close(); //close the file now
            } while( checkoff != 0 );
        }
    } while( choice != 3 );

    //clean up memory, close files

    //exit the program
    return 0;
}
