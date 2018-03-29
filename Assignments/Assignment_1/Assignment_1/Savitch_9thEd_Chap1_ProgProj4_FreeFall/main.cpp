
/* 
 * File:   main.cpp
 * Author: Lopez, Michelangelo
 * Created on February 22, 2018, 12:23 AM
 * Purpose: Calculating The Percentage Interest Payment
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries 

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Colum 
const float GRAVITY= 32.174;

//Function Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {
        //Declare Variables 
    float time, distnce;
            
        //Initial Variables
    

    cout<<"The program calculates the height in feet given Gravity is 32.174 and a user input"<<endl;
    cout<<"Input Time(Seconds)"<<endl;
    cin>>time;
    
          
        //Map/Process Inputs to Outputs
    distnce=0.5*GRAVITY*(time*time);
    
        //Display Outputs
    cout<<"Height"<<distnce<<"ft"<<endl; 
        //Exit program

    return 0;
}

