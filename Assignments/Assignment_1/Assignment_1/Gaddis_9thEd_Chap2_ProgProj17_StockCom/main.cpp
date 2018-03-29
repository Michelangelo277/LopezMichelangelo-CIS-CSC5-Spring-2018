/* 
 * File:   main.cpp
 * Author: Michelangelo, Lopez
 * Created on March 1, 2018, 9:18 AM
 * Purpose: Calcuate Total Amount Paid for Stock, the amount of the commission
 * , and the total amount paid with commission
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
    //Declare all Variables Here
    float shares, shrPrce, comsion, totWith, totWout, amntCom;
    //Input or initialize values Here
    shares=750;//amount of shares
    shrPrce=35;//dollars per share
    comsion=0.02;//percent commission per share
    //Process/Calculations Here
    totWout=shares*shrPrce;
    amntCom=totWout*comsion;
    totWith=amntCom+totWout;       
    //Output Located Here
    cout<<"The cost without commission is "<<totWout<<" Dollars"<<endl;
    cout<<"The commission cost is "<<amntCom<<" Dollars"<<endl;
    cout<<"The cost with commission is "<<totWith<<" Dollars"<<endl;        
    //Exit
    return 0;
}

