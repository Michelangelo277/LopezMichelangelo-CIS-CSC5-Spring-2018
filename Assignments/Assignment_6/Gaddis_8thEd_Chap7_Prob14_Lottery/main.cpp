/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on May 10, 2018, 9:50 AM
 * Purpose:  Least and Greatest Numbers in a list
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
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
    const int SIZE=5;
    int score;
    int lottery[SIZE];//Student Answer List
    int user[SIZE];//Answer List
    //Input The Values
    for(int i=0;i<SIZE;i++){
        lottery[i]=rand()%9+1;
    }
    cout<<"Enter your first number"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<i+1<<"/5 left"<<endl;
        cin>>user[i];
    }
    for(int i=0;i<SIZE;i++){
        if(lottery[i]==user[i]){
            score+=1;
        }
    }
    
    
    //Output The Score and if they passed or failed
    if(score==5){
        cout<<"Congrats you won the Grand Prize! "<<endl;
    }else{
        cout<<"Sorry you didn't choose the winning numbers"<<endl;
    }
    //Exit
    return 0;
}

