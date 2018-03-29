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

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(1);
    
    //set the random number seed
 
    //Declare all Variables Here
    float test1, test2, test3, test4, test5, testAvr;
    //Input or initialize values Here
    cout<<"Input 5 test scores to find their average"<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;

    
            
    //Process/Calculations Here
    testAvr=(test1+test2+test3+test4+test5)*0.2;
    //Output Located Here
    cout<<"The average score of the 5 scores inputted: "<<testAvr<<endl;

    //Exit
    return 0;
}

