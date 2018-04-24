/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on April 19, 2018, 9:08 AM
 * Purpose:  Blackjack Project Version 1
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
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    int card1, card2, card3, card4, card5, card6, card7, card8, card9, card10,
    card11, card12, card13, card14, card15, card16, card17, card18; 
    string crdNm, crdNm2, crdte; 
    //Input or initialize values Here
    card1=rand()%52+1;
    card2=rand()%52+1;
    //card3=rand()%52+1;
    //card4=rand()%52+1;
    //card5=rand()%52+1;
    //card6=rand()%52+1;
    //card7=rand()%52+1;
    //card8=rand()%52+1;
    //card9=rand()%52+1;
    //Process/Calculations Here
    if(card1==1||card1==2||card1==3||card1==4){
        crdNm="Ace";
    }
    if(card2==1||card2==2||card2==3||card2==4){
        crdNm="Ace";
    }
    if(card2==1||card2==2||card2==3||card2==4){
        crdNm="Ace";
    }
    if(card3==1||card3==2||card3==3||card3==4){
        crdNm="Ace";
    }
    if(card4==1||card4==2||card4==3||card4==4){
        crdNm="Ace";
    }
    if(card5==1||card5==2||card5==3||card5==4){
        crdNm="Ace";
    }
    if(card6==1||card6==2||card6==3||card6==4){
        crdNm="Ace";
    }
    if(card7==1||card7==2||card7==3||card7==4){
        crdNm="Ace";
    }
    //Output Located Here
    cout<<"Player's Hand:  "<<card1<<"   "<<card2<<endl;
    cout<<crdNm<<" And "<<crdNm2;

    //Exit
    return 0;
}
    
