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
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    
    //set the random number seed
 
    //Declare all Variables Here
    string month1, month2, month3;
    float m1, m2, m3, mnthAvg;
    //Input or initialize values Here
    cout<<"Input 3 months whose rainfall averages you wish to find."<<endl;
    cin>>month1>>month2>>month3;
    cout<<"Input the inches of rainfall for "<<month1<<endl;
    cin>>m1;
    cout<<"Input the inches of rainfall for "<<month2<<endl;
    cin>>m2;
    cout<<"Input the inches of rainfall for "<<month3<<endl;
    cin>>m3;
            
    //Process/Calculations Here
    mnthAvg=(m1+m2+m3)*0.33;
    //Output Located Here
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<" is "<<mnthAvg<<endl;
    //Exit
    return 0;
}

