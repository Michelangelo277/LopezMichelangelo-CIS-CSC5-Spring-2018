
/* 
 * File:   main.cpp
 * Author: Lopez, Michelangelo
 * Created on February 15, 2018, 12:25 pm
 * purpose: C++ Template
 *         To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries 

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Colum

//Function Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {
        //Declare Variables 
    float pntCov,//paint coverage in ft. sqr. per gallon
          fncLnth,//fence length in ft.
          fncHt,//fence height in ft.  
          totArea,//Total Area in ft. sqr.
          numGals;//Number of gallons of paint  
        //Initial Variables
    pntCov=340.0f;
    fncHt=6.0f;
    fncLnth=100.0f;
        //Map/Process Inputs to Outputs
    totArea=4*fncHt*fncLnth;//both sides painted twice
    numGals=ceil(totArea/pntCov);
        //Display Outputs
        cout<<"Paint coverage per gallon = "<<pntCov<<" ft."<<endl;
        cout<<"Fence Height = "<<fncHt<<" ft."<<endl;
        cout<<"Fence Length = "<<fncLnth<<" ft."<<endl;
        cout<<"Total Area to cover = "<<totArea<<" ft.^2"<<endl;
        cout<<"Number of gallons = "<<numGals<<endl;
        //Exit program

    return 0;
}

