/* 
 * Author: Michael Risher
 * Purpose: a program that takes time in hours minutes and ampm then adds x minutes. then display in both 12 hour and 24 hour format
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>
#include <string>

using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const int MIN_PER_HOUR = 60;
//Function Prototypes
bool isValidTime( int, int, string ); //determine if my input was good or not
void to24Hour( int &, int &, string ); //pass hours, minutes by reference so we modify them in this function
void addMinutes( int &, int &, int );
void printTime( int, int ); //24 hour fomrat
void printTime( int, int, string ); //overloaded print 12 hour
void to12Hour( int &hours, int &minutes, string &ampm ); //change back 12 hour format

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int hours, minutes;
    string ampm;
    int addMins;

    
    //Initialize Variables
    //ask for input 
    do{ 
        cout << "Enter a time; hour minute am/pm\n> ";
        cin >> hours >> minutes >> ampm;
    } while( !isValidTime( hours, minutes, ampm ) );
    
    cout << "How many minutes do you want to add\n> ";
    cin >>addMins;
    //Map/Process the Inputs -> Outputs
    to24Hour( hours, minutes, ampm );
    //actually add mins
    addMinutes( hours, minutes, addMins );
    
    //Display Inputs/Outputs
    printTime( hours, minutes );
    //back to icky human time for people and stuff
    to12Hour( hours, minutes, ampm );
    //print 12 hours
    printTime( hours, minutes, ampm );
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

bool isValidTime( int hours, int minutes, string ampm ){
    bool valid = true; //assume they put it right
    if( hours < 1 || hours > 12 ){
        cout << "Hour needs to be from 1 to 12" << endl;
        valid = false;
    }
    if ( minutes < 0 || minutes > 59 ){
        cout << "Minutes need to be from 0 to 59" << endl;
        valid = false;
    }

    if( ampm != "am" && ampm != "pm" && ampm != "AM" && ampm != "PM" ){
        cout << "am pm needs to be am or pm" << endl;
        valid = false;
    }

    return valid;

}

void to24Hour( int &hours, int &minutes, string ampm ){
    if( ampm == "PM" || ampm == "pm" ){
        //add 12 to everything but 12 pm
        if( hours != 12 ) {
            hours += 12;
        }
    } else if ( ampm == "am" || ampm == "AM" ){
        //if 12 am set hours 0. otherwise no change
        if( hours == 12 ){
            hours = 0;
        }
    }
}

void to12Hour( int &hours, int &minutes, string &ampm ){
    if( hours == 0 ){
        //only 0
        hours = 12;
        ampm = "AM";
    } else if ( hours < 12) {
        //am range 1-11
        ampm = "AM";
    } else if ( hours == 12 ){
        //only 12
        ampm = "PM";
    } else {
        //13-23 range
        hours -= 12;
        ampm ="PM";
    }
}

void addMinutes( int &hours, int &minutes, int addMins ){
    //add the minutes
    minutes = addMins;
    //if you add more than 60 we got issues
    if( minutes >= MIN_PER_HOUR ){
        hours += minutes / MIN_PER_HOUR; //how many hours were in those minutes
        minutes = minutes % MIN_PER_HOUR; //gets the leftover minutes from that division
    }

    //roll hours if exced 24
    if( hours >= 24 ){
        hours = hours % 24;
    }
}

void printTime( int hours, int minutes ){
    //prints the time
    cout << setw( 2 ) << setfill( '0' ) << hours;
    cout << ":";
    cout << setw( 2 ) << setfill( '0' ) << minutes ;
    cout << endl;
}

void printTime( int hours, int minutes, string ampm ){
    //prints the time
    cout << setw( 2 ) << setfill( '0' ) << hours;
    cout << ":";
    cout << setw( 2 ) << setfill( '0' ) << minutes;
    cout << " " << ampm;
    cout << endl;
}