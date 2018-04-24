/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on April 19, 2018, 9:08 AM
 * Purpose:  
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
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    int n, fctrl;
    //Input or initialize values Here
    fctrl=1;
    n=6;
    //Process/Calculations Here
    for(int i=1;i<=n;i++){
        fctrl*=i;   
    }
    //Output Located Here
    cout<<n<<"!= "<<fctrl<<endl;
    //Exit
    return 0;
}
    
