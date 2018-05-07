/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on May 6, 2018
 * Purpose:  Creating a program to calculate Kinetic Energy
 */

//System Libraries Here
#include <iostream>//I/O Library
#include <iomanip>//Format Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float kineticEnergy(float, float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float mass, velocty;
    //Input or initialize values Here
    cout<<"Input a mass"<<endl;
    cin>>mass;
    cout<<"Input a velocity"<<endl;
    cin>>velocty;
    //Output the time and a distance in meters
    cout<<"The kinetic energy is of the object is "<<kineticEnergy(mass, velocty)<<" Joules"<<endl;
        //Exit
    return 0;
}

float kineticEnergy(float mass, float velocty){
    float kE;
    //Loop for times 1-10
    cout<<"The mass of the object is "<<mass<<" kilograms"<<endl;
    cout<<"The velocity of the object is "<<velocty<<" meters per second"<<endl;
    return kE=0.5f*mass*(velocty*velocty);   
}