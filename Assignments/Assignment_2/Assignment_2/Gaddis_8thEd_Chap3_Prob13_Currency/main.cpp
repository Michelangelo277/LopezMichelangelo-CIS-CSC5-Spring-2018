/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on March 8, 2018, 11:23 AM
 * Purpose:  Math Tutor 
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float YEN_PER_DOLLAR=98.93;
const float EUROS_PER_DOLLAR=0.74;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    
    //set the random number seed
 
    //Declare all Variables Here
    float dollars, yen, euro;
    //Input or initialize values Here
    cout<<"This Program Calculates how much US currency is worth "
            "in Euros and Yen"<<endl;
    cout<<"Input the amount you want to convert in dollars"<<endl;
    cin>>dollars; 

            
    //Process/Calculations Here
    euro=dollars*EUROS_PER_DOLLAR;
    yen=dollars*YEN_PER_DOLLAR;
    //Output Located Here
    cout<<"The dollar amount $"<<dollars<<endl;
    cout<<"The dollar amount converted into yen "<<yen<<" yen"<<endl;
    cout<<"The dollar amount converted into euros "<<euro<<" euros"<<endl;

    //Exit
    return 0;
}

