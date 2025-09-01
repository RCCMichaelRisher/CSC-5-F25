/*
Author: Michael Risher
purpose: calculate employee wage with overtime
*/

//system libraries
#include <iostream> //i/o library
using namespace std;

//user libraries

//global constants 

//function prototypes

//execution begins here
int main(){
    //set random seed

    //declare variables & initialize values
    float regularRate; //their small pay rate
    float hoursWorked; //how many hours they work

    //asking for regular pay rate
    cout << "Enter your pay rate: ";
    cin >> regularRate;

    //ask for hours worked
    cout << "Enter your hours worked: ";
    cin >> hoursWorked; //puts the number from the user into the variable hoursWorked

    //overtime
    float overHoursWorked;
    float overtimeRate = regularRate * 1.5f;

    //ask for their hours worked in overtime
    cout << "How many hours did you work in overtime: ";
    cin >> overHoursWorked;

    //total pay
    float totalPay;
    float regularPay, overtimePay;

    //map/process inputs -> outputs
    regularPay = regularRate * hoursWorked; //multiplication of their hours and rate

    overtimePay = overHoursWorked * overtimeRate; //overtime multiplication 

    totalPay = regularPay + overtimePay;

    //display the input & outputs
    cout << "The total pay for this week is $" << totalPay << endl;

    //clean up memory/files
    //exit the program
    return 0;    
}
