/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on May 6, 2018
 * Purpose:  Creating a program to calculate falling distance
 */

//System Libraries Here
#include <iostream>//I/O Library
#include <iomanip>//Format Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float GRAVITY=9.8f;
//Function Prototypes Here
float fallingDistance(float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int time;
    //Input or initialize values Here
    time=1;
    
    //Output the time and a distance in meters
    cout<<fallingDistance(time)<<endl;
        //Exit
    return 0;
}

float fallingDistance(float time){
    float distance;
    //Loop for times 1-10
    for(int cnt=1;cnt<=10;cnt++){        
        cout<<"When the time is     = "<<cnt<<" seconds"<<endl;//Time in seconds
        distance=0.5f*GRAVITY*(time*time);
        cout<<"The falling distance = "<<distance<<" meters"<<endl;
        time++;
    }

}