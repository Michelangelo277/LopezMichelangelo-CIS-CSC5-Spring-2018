/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on April 19, 2018, 9:08 AM
 * Purpose:  Blackjack Project Version 2
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>//Rand function 
#include <ctime>//Time 
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
    int card1, card2, card3, card4, cardDe, cardDe2, cardDe3, cardDe4, repeat, 
            repeat2, repeat3, repeat4, test, x; 
    string crdNm, crdTe, crdNm2, crdTe2, dlrNm, dlrTe, dlrNm2, dlrTe2; 
    //Input or initialize values Here
    do{
        cin>>x;
    card1=rand()%13+1;//Randomly generate numbers[1,13] for Player
    card2=rand()%4+1;//Randomly Generate Numbers[1,4] for Player
    card3=rand()%13+1; 
    card4=rand()%4+1;
    cardDe=rand()%13+1;//Randomly generate numbers[1,13] for Dealer 
    cardDe2=rand()%4+1;//Randomly Generate Numbers[1,4] for Dealer
    cardDe3=rand()%13+1; 
    cardDe4=rand()%4+1;
    repeat=card1*card2;
    repeat2=card3*card4;
    repeat3=cardDe*cardDe2;
    repeat4=cardDe3*cardDe4;
    if(repeat==repeat2||repeat3==repeat4){card1=rand()%13+1;}
    if(repeat==repeat2||repeat3==repeat4){card3=rand()%13+1;}
    test=card1+card3;
    switch (card1){
            case 1:crdTe="Ace";break;//Switch Statement to show the user which card they drew
            case 2:crdTe="Two";break;
            case 3:crdTe="Three";break;
            case 4:crdTe="Four";break;
            case 5:crdTe="Five";break;
            case 6:crdTe="Six";break;
            case 7:crdTe="Seven";break;
            case 8:crdTe="Eight";break;           
            case 9:crdTe="Nine";break;            
            case 10:crdTe="Ten";break;           
            case 11:crdTe="King";break;           
            case 12:crdTe="Queen";break;            
            case 13:crdTe="Jack";break;
    }
    switch (card2){
            case 1:crdNm="of Spades";break;
            case 2:crdNm="of Hearts";break;
            case 3:crdNm="of Clubs";break;
            case 4:crdNm="of Diamonds";break;
    }
    switch (card3){
            case 1:crdTe2="Ace";break;
            case 2:crdTe2="Two";break;
            case 3:crdTe2="Three";break;
            case 4:crdTe2="Four";break;
            case 5:crdTe2="Five";break;
            case 6:crdTe2="Six";break;
            case 7:crdTe2="Seven";break;
            case 8:crdTe2="Eight";break;           
            case 9:crdTe2="Nine";break;            
            case 10:crdTe2="Ten";break;           
            case 11:crdTe2="King";break;           
            case 12:crdTe2="Queen";break;            
            case 13:crdTe2="Jack";break;
    }
    switch (card4){
            case 1:crdNm2="of Spades";break;
            case 2:crdNm2="of Hearts";break;
            case 3:crdNm2="of Clubs";break;
            case 4:crdNm2="of Diamonds";break;
    }
    

    if(card1>=10||card1<=13){
        card1=10;
    }
    if(card1==1){
        card1=11;
        crdTe="Ace";
    }
    if(card3==1){
        card3=11;
        crdTe2="Ace";
    }
    if(test==21){
        cout<<"You win!"<<endl;
    }
    cout<<crdTe<<" "<<crdNm<<endl;
    cout<<crdTe2<<" "<<crdNm2<<endl;
    }while(x==1);
    //Process/Calculations Here
    
    //Output Located Here
    
    //Exit
    return 0;
}
    
