/* 
 * Author: Michael Risher
 * Purpose: midterm hint for problem 3
 * 
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <string>

using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
//int number; ☹️😖 dont use global variables = bad grade

//Function Prototypes
int getNumber();  //tell the compiler there is a getNUmber function
string convertToRoman( int arabic );

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int number; //arabic number from user
    string roman; //put the roman numeral here
    //Initialize Variables
    number = getNumber();

    //Map/Process the Inputs -> Outputs
    roman = convertToRoman( number );

    //Display Inputs/Outputs
    cout << number << " in roman numerals is " << roman << endl;
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}


//define getNumber() which just gets the number
int getNumber(){
    int n;
    do{
        cout << "Enter a number from 1 to 3000 inclusive\n> ";
        cin >> n;
    } while( n < 1 || n > 3000 );
    return n;
}


string convertToRoman( int arabic ) {
    string roman = ""; //result temp hold variable

    //process 1000's 
    while( arabic >= 1000 ){
        roman += "M";
        arabic -= 1000;
    }

    //process hundreds
    //special cases
    if( arabic >= 900 ){
        roman += "CM";
        arabic -= 900;
    } else if( arabic >= 500 ) {
        roman += "D";
        arabic -= 500;
    } else if( arabic >= 400 ) {
        roman += "CD";
        arabic -= 400;
    } 
    //handle the rest
    while( arabic >= 100 ){
        roman += "C";
        arabic -= 100;
    }

    //process the tens place
    if( arabic >= 90 ){
        roman += "XC";
        arabic -= 90;
    } else if( arabic >= 50 ){
        roman += "L";
        arabic -= 50;
    } else if ( arabic >= 40 ){
        roman += "XL";
        arabic -= 40;
    }
    while( arabic >= 10 ){
        roman += "X";
        arabic -= 10;
    }


    //process the ones
    if( arabic >= 9 ){
        roman += "IX";
        arabic -= 9;
    } else if( arabic >= 5 ){
        roman += "V"; 
        arabic -= 5;
    } else if( arabic >= 4 ){
        roman += "IV";
        arabic -= 4 ;
    }
    while( arabic >= 1 ){
        roman += "I";
        arabic -= 1;
    }

    return roman;
    //come to this once arrays are done
}