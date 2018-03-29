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
const float PERCENT=100.0f;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //set the random number seed
 
    //Declare all Variables Here
    string month1, month2, month3;
    float male, female, totlStu, prctMl, prctFl;
    //Input or initialize values Here
    cout<<"Input the total students"<<endl;
    cin>>totlStu;
    cout<<"Input the amount of male students "<<endl;
    cin>>male;
    cout<<"Input the amount of female students "<<endl;
    cin>>female;
            
    //Process/Calculations Here
    prctFl=female/totlStu;
    prctMl=male/totlStu;
    //Output Located Here
    cout<<"The percent of males in the class is "<<prctMl*PERCENT<<"%"<<endl;
    cout<<"The percent of females in the class is "<<prctFl*PERCENT<<"%"<<endl;
    //Exit
    return 0;
}

