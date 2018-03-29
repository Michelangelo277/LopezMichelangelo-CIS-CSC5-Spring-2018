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
    float loanPay, insure, gas, oil, tires, maintin, mnthPay, annlPay;
    //Input or initialize values Here
    cout<<"This Program Calculates how much you spend yearly on your car"<<endl;
    cout<<"Input the amount you pay for loan payments in dollars"<<endl;
    cin>>loanPay; 
    cout<<"Input the amount you pay for insurance in dollars"<<endl;
    cin>>insure; 
    cout<<"Input the amount you pay for gas in dollars"<<endl;
    cin>>gas; 
    cout<<"Input the amount you pay for oil in dollars"<<endl;
    cin>>oil; 
    cout<<"Input the amount you pay for tires in dollars"<<endl;
    cin>>tires; 
    cout<<"Input the amount you pay for maintenance in dollars"<<endl;
    cin>>maintin; 

            
    //Process/Calculations Here
    mnthPay=loanPay+insure+gas+oil+tires+maintin;
    annlPay=mnthPay*12;
    //Output Located Here
    cout<<"Loan Payment                 $"<<loanPay<<endl;
    cout<<"Insurance Payment            $"<<insure<<endl;
    cout<<"Gas Payment                  $"<<gas<<endl;
    cout<<"Oil Payment                  $"<<oil<<endl;
    cout<<"Tires Payment                $"<<tires<<endl;
    cout<<"Maintenance Payment          $"<<maintin<<endl;
    cout<<"Total amount spent per month $"<<mnthPay<<endl;
    cout<<"Total amount spent per year  $"<<annlPay<<endl;
    //Exit
    return 0;
}

