/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on April 19, 2018, 9:08 AM
 * Purpose: Random Numbers used in Approximating PI
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
const float PI=4*atan(1);//Definition of PI
const float MXRND=pow(2,31)-1;
//Program Execution Begins Here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    float approxPI;//Approximate value of PI in # of terms in Sequence 
    int nDarts;//# of Darts in Dart Game
    int inCrcl;//# of darts in Circle
    //Input or initialize values Here
    inCrcl=0;
    nDarts=10000;
    //Process/Calculations Here
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/MXRND;
        float y=rand()/MXRND;
        if(x*x+y*y<=1)inCrcl++;
    }
    approxPI=4.0f*inCrcl/nDarts;//Approximates PI
    //Output Located Here
    cout<<"After "<<nDarts<<" the Approximate Value of PI = "<<approxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-approxPI)/PI*100<<"%"<<endl;
    //Exit
    return 0;
}
    
