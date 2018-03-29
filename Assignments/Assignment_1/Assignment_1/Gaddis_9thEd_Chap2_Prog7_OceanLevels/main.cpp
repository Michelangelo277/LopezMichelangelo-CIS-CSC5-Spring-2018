
/* 
 * File:   main.cpp
 * Author: Lopez, Michelangelo
 * Created on March 4, 2018
 * purpose: Recording the ocean levels rising at a rate of 1.5 per year and 
 * displaying them after 5, 7, and 10 years
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries 

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Colum

//Function Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {
        //Declare Variables 
    float ocanLvl, lvlFive, lvlSevn, lvlTen;
        //Initial Variables
    ocanLvl=1.5;
        //Map/Process Inputs to Outputs
    lvlFive=ocanLvl+ocanLvl*5;
    lvlSevn=ocanLvl+ocanLvl*7;
    lvlTen=ocanLvl+ocanLvl*10;
        //Display Outputs 
        cout<<"The ocean level in 5 years "<<lvlFive<<" mm"<<endl;
        cout<<"The ocean level in 7 years "<<lvlSevn<<" mm"<<endl;
        cout<<"The ocean level in 10 years "<<lvlTen<<" mm"<<endl;
        //Exit program

    return 0;
}

