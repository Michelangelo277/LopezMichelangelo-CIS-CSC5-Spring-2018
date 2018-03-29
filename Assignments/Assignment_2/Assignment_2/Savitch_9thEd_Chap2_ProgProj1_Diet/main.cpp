/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float LBTOGRM=454.0f;//pounds to grams conversion
const float DAYSYR=365.0f;//days per year
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    float mMouse=35.0f,//mass of the mouse in grams
          mKillM=5.0f,//mass in sweetener to kill mouse 
          mSoda=350.0f,//mass of soda
          sodaCnc=0.001f,//soda concentration of sweetener
          wtDtr; //weight of the dieter in pounds
    unsigned int numCans, //number of cans to drink before death
            cCnsmd, //number of cans consumed
            cnsDay, //cans per day
            numYrs; //number of years consuming soda
    
    //Input or initialize values Here
    cout<<"This program calculates soda can consumption permitted"<<endl;
    cout<<"Input your final desired weight in lbs after diet soda consumption"<<endl;
    cin>>wtDtr;
    cout<<"Input how many cans you drink per day"<<endl;
    cin>>cnsDay;
    cout<<"Input how many years you drank soda"<<endl;
    cin>>numYrs;
    
    //Process/Calculations Here
    numCans=mKillM*wtDtr*LBTOGRM/(mMouse*mSoda*sodaCnc)-1;
    cCnsmd=cnsDay*DAYSYR*numYrs;
    //Output Located Here
    cout<<"The Weight of the Dieter after soda consumption = "<<wtDtr<<" lbs"<<endl;
    cout<<"Maximum cans of soda allowed to consume = "<<numCans<<endl;
    cout<<"Total cans of soda so far consumed = "<<cCnsmd<<endl;
    cout<<(cCnsmd<numCans?"You lived":"You are dead")<<endl;
    //Exit
    return 0;
}

