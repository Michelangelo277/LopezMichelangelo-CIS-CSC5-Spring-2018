/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on May 6, 2018
 * Purpose:  Calculate the Retail Price given a Wholesale cost and Markup Price
 */

//System Libraries Here
#include <iostream>//I/O Library
#include <iomanip>//Format Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PRCNTCNV=100.0f;
//Function Prototypes Here
float calRetl(float, float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float whlsCst, mrkpPrc;
    //Input or initialize values Here
    cout<<"Input an Item's Wholesale Cost"<<endl;//In dollars
    cin>>whlsCst;
    cout<<"Input the Markup Percentage of the Item"<<endl;
    cin>>mrkpPrc;
    //Calculate the retail price
    
    //Output the retail price
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Wholesale cost    = $"<<whlsCst<<endl;
    cout<<"Markup Percentage =  "<<mrkpPrc<<"%"<<endl;
    cout<<"Retail Price      = $"<<calRetl(whlsCst, mrkpPrc)<<endl;
    //Exit
    return 0;
}

float calRetl(float whlsCst, float mrkpPrc){
    float rtlPrc;
    rtlPrc=whlsCst+(whlsCst*(mrkpPrc/PRCNTCNV));
    return rtlPrc;
}