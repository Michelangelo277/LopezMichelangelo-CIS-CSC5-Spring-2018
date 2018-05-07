/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on April 24, 2018, 11:25 AM
 * Purpose:  Initial Savings function
 */

//System Libraries Here
#include <iostream>//I/O Library
#include <cmath>//Math Library
#include <iomanip>//
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float CNVPERC=1e2f;
//Function Prototypes Here
float fval1(float, float, int);//Future value with power function
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float presVal,//present value in $'s
          intRate;//Interest rate in %
    int numCmp;//Number of compounding periods in years 
    
    //Input or initialize values Here
    cout<<"Input the amount you would like to deposit."<<endl;
    cin>>presVal;
    cout<<"Input the interest rate"<<endl;
    cin>>intRate;
    cout<<"Input the amount of years you will leave the deposit"<<endl;
    cin>>numCmp;
    //Process/Calculations Here
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Deposit = "<<presVal<<endl;
    cout<<"\nInterest Rate = "<<intRate<<"%"<<endl;
    cout<<"\nNumber of years = "<<numCmp<<" years"<<endl;
    cout<<"Future Value                    = $"<<fval1(presVal, intRate/CNVPERC, numCmp)<<endl;
    //Exit
    return 0;
}

float fval1(float pv, float ir, int n){//Future value with power function
    return pv*pow((1+ir),n);
}
