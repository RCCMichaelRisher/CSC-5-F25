/* 
 * Author: Michael Risher
 * Purpose: gradebook program with 2d arrays
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random number generation
#include <ctime>     //Time for random seed
#include <iomanip>  //Formatting output
#include <vector>   //Vector library for dynamic arrays

using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const int ASSIGNMENTS = 4;
//Function Prototypes
void inputGrades( int grades[][ASSIGNMENTS], int numStudents );
void inputRandomGrades( int grades[][ASSIGNMENTS], int numStudents );
void displayGrades( int grades[][ASSIGNMENTS], int numStudents );
void displayGrades( int grades[][ASSIGNMENTS], int numStudents, float averages[], vector<int> minMax[] ) ;
void calculategrades( int grades[][ASSIGNMENTS], int numStudents, float averages[], vector<int> minMax[] );

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand( time( 0 ) ); 
    //Declare Variables
    int numStudents;

    
    //Initialize Variables
    do{
        cout << "Enter the number of students (1-100): ";
        cin >> numStudents;
    } while(numStudents < 1 || numStudents > 100);
    int grades[numStudents][ASSIGNMENTS]; // 2D array for grades

    //Map/Process the Inputs -> Outputs
    cout << "Choose input method:" << endl;
    cout << "1. Manual Input" << endl;
    cout << "2. Random Grades: \n> ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        inputGrades(grades, numStudents);
    } else if (choice == 2) {
        inputRandomGrades(grades, numStudents);
    } else {
        cout << "Invalid choice. Exiting program." << endl;
        return 1; // Exit if invalid choice
    }
    
    
    
    //Display Inputs/Outputs
    cout << "Displaying Grades without the average:" << endl;
    displayGrades( grades, numStudents );

    //Calculate Average Grades (if needed)
    float averages[numStudents]; // Array to hold average grades
    vector<int> minMax[ASSIGNMENTS]; // Vector to hold min and max grades for each assignment
    calculategrades( grades, numStudents, averages, minMax );
    
    cout << "\n\nDisplaying Grades with the average:" << endl;
    displayGrades( grades, numStudents, averages, minMax );
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void inputGrades( int grades[][ASSIGNMENTS], int numStudents ) {
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter grades for student " << (i + 1) << ": ";
        for (int j = 0; j < ASSIGNMENTS; j++) {
            cout << "Assignment " << (j + 1) << ": ";
            cin >> grades[i][j];
        }
    }
}

void inputRandomGrades( int grades[][ASSIGNMENTS], int numStudents ) {
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < ASSIGNMENTS; j++) {
            grades[i][j] = rand() % 101; // Random grades between 0 and 100
        }
    }
}

void displayGrades( int grades[][ASSIGNMENTS], int numStudents ) {
    cout << fixed << setprecision(2);
    cout <<  "Grades: " << "| Assignments\n";
    
    cout << "Student # | ";
    for (int j = 0; j < ASSIGNMENTS; j++) {
        cout << "a" << (j + 1) << " | ";
    }
    cout << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << ": ";
        for (int j = 0; j < ASSIGNMENTS; j++) {
            cout << setw( 4 ) << grades[i][j] << " ";
        }
        cout << endl;
    }
}

void displayGrades( int grades[][ASSIGNMENTS], int numStudents, float averages[], vector<int> minMax[] ) {
    cout << fixed << setprecision(2);
    cout << "Grades: " << "| Assignments    | Average\n";
    
    cout << "Student # | ";
    for (int j = 0; j < ASSIGNMENTS; j++) {
        cout << "a" << (j + 1) << " | ";
    }
    cout << " avg" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << ": ";
        for (int j = 0; j < ASSIGNMENTS; j++) {
            cout << setw(4) << grades[i][j] << " ";
        }
        cout << setprecision(1) << averages[i];
        cout << endl;
    }
    cout << "Min       ";
    for( int i = 0; i < ASSIGNMENTS; i++ ) {
        cout << setw(4) << minMax[i][0] << " ";
    }
    cout << endl << "Max       ";
    for( int i = 0; i < ASSIGNMENTS; i++ ) {
        cout << setw(4) << minMax[i][1] << " ";
    }
}

void calculategrades( int grades[][ASSIGNMENTS], int numStudents, float averages[], vector<int> minMax[] ) {
    for( int i = 0; i < ASSIGNMENTS; i++ ){
        minMax[i] = vector<int>(2, 0); // Initialize min and max for each assignment

        minMax[i][0] = grades[0][i]; // Set initial min
        minMax[i][1] = grades[0][i]; // Set initial max

        for( int j = 0; j < numStudents; j++ ){
            if( grades[j][i] < minMax[i][0] ){
                minMax[i][0] = grades[j][i]; // Update min
            }
            if( grades[j][i] > minMax[i][1] ){
                minMax[i][1] = grades[j][i]; // Update max
            }
        }
    }

    for( int i = 0; i < numStudents; i++ ){
        float total = 0.0f;
        for( int j = 0; j < ASSIGNMENTS; j++ ){
            total += grades[i][j];
        }
        averages[i] = total / ASSIGNMENTS; // Calculate average
    }
}