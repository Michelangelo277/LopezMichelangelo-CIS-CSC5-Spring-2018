/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on March 8, 2018, 11:23 AM
 * Purpose:  Finding average rainfall for 3 months
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //set the random number seed
 
    //Declare all Variables Here
    float feDeg, ceDeg;
    //Input or initialize values Here
    cout<<"Input a degree in Celsius "<<endl;
    cin>>ceDeg;
            
    //Process/Calculations Here
    feDeg=1.8*ceDeg+32;
    //Output Located Here
    cout<<"The degree in fahrenheit is "<<feDeg<<" degrees"<<endl;
    //Exit
    return 0;
}

