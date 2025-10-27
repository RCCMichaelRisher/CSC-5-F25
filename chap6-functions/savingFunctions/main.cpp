/* 
 * Author: Michael Risher
 * Purpose: saving function with all varieties 
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
float powSave( float, float, int );  //using power function
float powSave( float, float, float );  //using power function with overloading by changing the parameter list
float defaultSave( float, float, int = 12 ); //default values for the numCompound
void byRefSave( float &pFV, float i, int n ); //pass presentValue by reference
int staticSave( float &pFV, float i, int n ); //static variable within the function
float recursiveSave( float, float, int );  //recursive function aka function that calls itself

void print( string, float, float , int  ) ; //util print function to reduce typing
void print( string, float, float , float  ) ; //util print function to reduce typing overloaded for the float numCompound Case
//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float presentValue;
    float intRate; // interest rate in % / compound periods
    int numCompound; //number of compounding periods;
    
    //Initialize Variables
    presentValue = 100.0f;
    intRate = 6.0;
    numCompound = 72 / intRate;
    
    //Map/Process the Inputs -> Outputs
    intRate /= 100;
    //Display Inputs/Outputs
    

    print( "powSave", presentValue, intRate, numCompound );
    cout << powSave( presentValue, intRate, numCompound ) << endl; ;

    print( "float, powSave", presentValue, intRate, static_cast<float>(numCompound) );
    cout << powSave( presentValue, intRate, static_cast<float>(numCompound)  ) << endl;;

    print( "defaultSave", presentValue, intRate, numCompound );
    cout << defaultSave( presentValue, intRate ) << endl;

    //pass by ref
    float pCopy = presentValue;
    print( "byRefSave", pCopy, intRate, numCompound );
    byRefSave( pCopy, intRate, numCompound );
    cout << pCopy << endl;

    pCopy = presentValue;
    print( "staticSave", pCopy, intRate, numCompound );
    int count = staticSave( pCopy, intRate, numCompound );
    cout << pCopy << endl; ;
    for( int i = 0; i < 5; i++ ){
        count = staticSave( pCopy, intRate, numCompound );
    }
    cout << "Function calls: " << count << endl;


    //recursive
    print( "recursiveSave", presentValue, intRate, numCompound );
    cout << recursiveSave( presentValue, intRate, numCompound ) << endl;

    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void print( string fn, float p, float i, int n ){
    cout << fn << "( " << p << ", " << i << ", " << n << ") = $";
}

void print( string fn, float p, float i , float n ){
    cout << fn << "( " << p << ", " << i << ", " << n << ") = $";
}
/*************************Saving functions************************/
/* inputs:  p == present value
/*          i == interest Rate
/*          n == number of periods
/* return:  fv == future value of savings or loan   
/******************************************************************/
float powSave( float p, float i, int n ){
    return p * pow( ( 1 + i ), n ); //pow( y, x ) //y^x
}

float powSave( float p, float i, float n ){
    return p * pow( ( 1 + i ), n ); //pow( y, x ) //y^x
}

float defaultSave( float p, float i, int n ){
    float fv = p; //future value
    for( int period = 1; period <= n; period++ ){
        fv *= (1 + i);  //fv = fv * x
    }
    return fv;
}

void byRefSave( float &pFV, float i, int n ){
    for( int period = 1; period <= n; period++ ){
        pFV *= (1 + i);  //fv = fv * x
    }
    return;
}

//return times it ran not the future value
int staticSave( float &pFV, float i, int n ){
    static int functionCalls = 0;
    for( int period = 1; period <= n; period++ ){
        pFV *= (1 + i);  //fv = fv * x
    }
    return ++functionCalls;
}

float recursiveSave( float p, float i, int n ){
    if( n < 1 ){
        return p; //base case. stop the looping
    }

    return recursiveSave( p, i, n - 1 ) * ( 1 + i );
}