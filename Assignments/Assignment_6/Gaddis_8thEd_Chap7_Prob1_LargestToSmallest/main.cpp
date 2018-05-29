/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on May 10, 2018, 9:50 AM
 * Purpose:  Least and Greatest Numbers in a list
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
    const int VALUE=10;
    int x[VALUE];
    int grtst=0,//To test for the largest Number in the list
    least=2^31-1;//Testing for the smallest Number in the list
    //Input The Values
    cout<<"Enter 10 values and this program will output the greatest value inputed"<<endl;
    for(int i=0;i<10;i++){
        cin>>x[i];
    }
    //Print out the Numbers in the Array 
    for(int i=0;i<10;i++){
    cout<<"Number "<<i+1<<" = "<<x[i]<<endl;
    }
    //For Loops to check for the Greatest and Least
    for(int i=0;i<10;i++){
        if(x[i]>grtst){
            grtst=x[i];
        }
    }
    for(int i=0;i<10;i++){
        if(x[i]<least){
            least=x[i];
        }
    }
    //Output The Smallest and Largest Numbers in the List
    cout<<"The Largest Number in the list "<<grtst<<endl;
    cout<<"The Smallest Number in the list "<<least<<endl;
    //Exit
    return 0;
}

