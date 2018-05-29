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
    const int SIZE=20;
    int score;
    char q[SIZE];//Student Answer List
    char a[SIZE]={'A', 'D', 'B','B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'D', 'B'};//Answer List
    //Input The Values
    
    for(int i=0;i<SIZE;i++){
        cout<<"Enter Answer for Question "<<i+1<<endl;
        cin>>q[i];
    }
    for(int i=0;i<SIZE;i++){
        if(q[i]==a[i]){
            score+=1;
        }
    }
    
    
    //Output The Score and if they passed or failed
    if(score>=15){
        cout<<"The student passed with a score of "<<score<<"/20"<<endl;
    }
    if(score<15){
        cout<<"The student failed with a score of "<<score<<"/20"<<endl;
    }
    //Exit
    return 0;
}

