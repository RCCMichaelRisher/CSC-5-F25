/* 
 * Author: Michael Risher
 * Purpose: solving the problem in savitch book pg 176 problem 6
The Fibonacci numbers Fn are defined as follows. F0 is 1, F1 is 1, and 
i = 0, 1, 2, .... In other words, each number is the sum of the previous 
two numbers. The first few Fibonacci numbers are 1, 1, 2, 3, 5, and 8. One 
place that these numbers occur is as certain population growth rates. If a 
population has no deaths, then the series shows the size of the population 
after each time period. It takes an organism two•time periods to mature to 
reproducing age, and then the organism reproduces once every time period. The formula applies most straightforwardly to asexual reproduction 
at a rate of one offspring per time period. 
Assume that the green crud population grows at this rate and has a time period of 5 days. Hence, if a green crud population starts out as 10 pounds of 
crud, then in 5 days there is still 10 pounds of crud; in 10 days there is 20 
pounds of crud, in 15 days 30 pounds, in 20 days 50 pounds, and so forth. 
Write a program that takes both the initial size of a green crud population 
(in pounds) and a number of days as input, and that outputs the number 
of pounds of green crud after that many days. A~~ume that the population 
size is the same for 4 days and then increases evdy fifth day. Your program 
should allow the user to repeat this calculation as often as desired.
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
int calculatePop( int startPop, int days );
int getFib( int count );
char askForRepeat();

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int days; //num of days
    int initPop; //initial population of green crud
    char repeat; //y or n to repeat program

    
    //Initialize Variables
    do{
        cout << "Enter the initial population of green crud\n> ";
        cin >> initPop;

        cout << "Enter the number of days\n> ";
        cin >> days;

        //ending population is
        int population = calculatePop( initPop, days );

        cout << "The population after " << days << " days is " << population << " pounds" << endl;

        repeat = askForRepeat();
    }while( repeat == 'y' || repeat == 'Y' );
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

char askForRepeat(){
    char repeat;
    cout << "Do you want to repeat this crud?" << endl;
    cout << "> ";
    cin >> repeat;
    return repeat;
}

int calculatePop( int startPop, int days ){
    int count = days / 5; //number of terms in the sequence
    int fib = getFib( count );
    return ( count <= 2 ) ? startPop : startPop * fib;
}

//get number from the fib sequence
int getFib( int count ){    
    if( count < 2 ) return 1; 

    int f0 = 1;
    int f1 = 1;
    int f2;
    for( int i = 2; i <= count; i++ ){
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }
    return f2;
}

//fib sequence
//1,1,2,3,5,8
// start 10

// 5 days / 5 = 1
// 10 pounds * getfib( 1 ) = 10

// 10 / 5 = 2
// 10lb * getfib( 2 ); = 10

// of crud; in 10 days there is 20 
// pounds of crud, in 15 days 30 pounds, in 20 days 50 pounds