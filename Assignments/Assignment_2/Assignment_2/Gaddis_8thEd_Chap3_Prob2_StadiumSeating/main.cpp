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
    cout.precision(2);
    
    //set the random number seed
 
    //Declare all Variables Here
    float seatA, seatB, seatC, income;
    //Input or initialize values Here
    cout<<"This Program Calculates total income for 3 classes of seating at a"
            " baseball stadium "<<endl;
    cout<<"Input the number of seating A tickets sold"<<endl;
    cin>>seatA; 
    cout<<"Input the number of seating B tickets sold"<<endl;
    cin>>seatB; 
    cout<<"Input the number of seating C tickets sold"<<endl;
    cin>>seatC; 

    
            
    //Process/Calculations Here
    seatA*=15;
    seatB*=12;
    seatC*=9;
    income=seatA+seatB+seatC;
    //Output Located Here
    cout<<"The Total Income from ticket sales $"<<income<<endl;
   

    //Exit
    return 0;
}

