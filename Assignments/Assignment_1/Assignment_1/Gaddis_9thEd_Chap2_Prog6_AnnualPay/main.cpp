
/* 
 * File:   main.cpp
 * Author: Lopez, Michelangelo
 * Created on March 4, 2018
 * purpose: Displaying and Calculating annual pay over a year 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries 

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Colum

//Function Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {
        //Declare Variables 
    float payAmnt, payPerd, annlPay;
        //Initial Variables
    payAmnt=2200;
    payPerd=26;
        //Map/Process Inputs to Outputs
    annlPay=payAmnt*payPerd;    
        //Display Outputs
        cout<<"This is the annual pay: "<<annlPay<<" dollars per year"<<endl;

        //Exit program

    return 0;
}

