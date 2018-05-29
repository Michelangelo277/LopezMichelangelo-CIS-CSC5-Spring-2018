/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on May 10, 2018, 9:50 AM
 * Purpose:  Hello World Template
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
    const int SIZE=12;
    float mthRain[SIZE], totRain, avrRain;
    int biggest=0, smallst=2^31-1;//Checking for Largest, Smallest, Average, and total Rainfall
    //Input or initialize values Here
    cout<<"Enter each amount of rainfall for 12 months."<<endl;
    for(int i=0;i<SIZE;i++){
        cin>>mthRain[i];
    }
    //Process/Calculations Here
    totRain=mthRain[0]+mthRain[1]+mthRain[2]+mthRain[3]+mthRain[4]+mthRain[5]+mthRain[6]+mthRain[7]+mthRain[8]+mthRain[9]+mthRain[10]+mthRain[11];
    avrRain=totRain*0.083f;
    for(int i=0;i<SIZE;i++){
        if(mthRain[i]>biggest){
            biggest=mthRain[i];
        }
    }
    for(int i=0;i<SIZE;i++){
        if(mthRain[i]<smallst){
            smallst=mthRain[i];
        }
    }
    
    //Output The Smallest and Largest Numbers in the List
    cout<<"The Total Rainfall is "<<totRain<<endl;
    cout<<"The Average Rainfall is "<<avrRain<<endl;
    cout<<"The Greatest amount of rainfall in "<<biggest<<endl;
    cout<<"The Least amount of rainfall in "<<smallst<<endl;
    //Output Located Here
    

    //Exit
    return 0;
}

