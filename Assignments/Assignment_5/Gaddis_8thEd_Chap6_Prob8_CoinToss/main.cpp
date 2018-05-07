/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on May 6, 2018
 * Purpose: Simulate as many coin flips the user inputs
 */

//System Libraries Here
#include <iostream>//I/O Library
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int coinToss(int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    int coin, coins;
    //Input or initialize values Here
    cout<<"Input how many coins you want to flip"<<endl;
    cin>>coins;
    //Output the result
    for(int i=1;i<=coins;i++){
    cout<<coinToss(coin)<<endl;
    }
        //Exit
    return 0;
}

int coinToss(int coin){
    coin=rand()%2+1;
    if(coin==2){cout<<"Tails"<<endl;
    }else{
    cout<<"Heads"<<endl;
    }
    return coin;
}