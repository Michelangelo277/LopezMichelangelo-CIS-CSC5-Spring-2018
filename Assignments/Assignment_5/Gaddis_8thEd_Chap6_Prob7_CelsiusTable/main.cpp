/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on May 6, 2018
 * Purpose: Creating a table with 20 Fahrenheit values converted into Celsius
 */

//System Libraries Here
#include <iostream>//I/O Library
#include <iomanip>//Format Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float convTab(float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float fahRen=0;
    //Input or initialize values Here
    
    //Output Table
    cout<<"Fahrenheit          Celsius"<<endl;
    for(int cnt=1;cnt<=20;cnt++){        
        cout<<fahRen<<"                  "<<convTab(fahRen)<<endl;
        fahRen++;
    }
        //Exit
    return 0;
}

float convTab(float fahRen){
    float celsius;
    return celsius=0.6f*(fahRen-32);
}