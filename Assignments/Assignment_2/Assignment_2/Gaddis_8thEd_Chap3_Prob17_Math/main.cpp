/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on March 8, 2018, 11:23 AM
 * Purpose:  Math Tutor 
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>//random number library
#include <ctime>//time to set random number seed
#include <iomanip>//format library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    unsigned short op1, op2, stuAns, correct;
    //Input or initialize values Here
    op1=rand()%900+100;//between 100 and 999 [100,999]
    op2=rand()%999+1;//[1,999]
    cout<<"This is a simple math tutor program"<<endl;
    cout<<"Input the Answer to the following addition problem"<<endl;
    cout<<setw(5)<<op1<<endl;
    cout<<"+ "<<setw(3)<<op2<<endl;
    cout<<"------"<<endl;
    
    
    //Process/Calculations Here
    correct=op1+op2;
    cout<<((correct>100)?"  ":"   ");
    cin>>stuAns;
    //Output Located Here
    cout<<endl<<(stuAns==correct?"Correct Answer":"Wrong answer")<<endl;

    //Exit
    return 0;
}

