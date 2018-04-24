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
    char choice;
    float money;
    int card1, card2, card3, card4, cardDe, cardDe2, cardDe3, cardDe4, repeat, 
            repeat2, repeat3, repeat4, twOne, twOne2, ace=0;//Values for player and dealer cards
    string crdNm, crdTe, crdNm2, crdTe2, dlrNm, dlrTe, dlrNm2, dlrTe2; 
    cout<<"Welcome to Blackjack!"<<endl;
    cout<<"How much money would you like to start with?(Maximum $100,000)"<<endl;
    cin>>money;
    cout<<"Press any key to start"<<endl;
    
    do{
    //Input or initialize values Here
    cin>>choice;
    card1=1;//Randomly generate numbers[1,13] for Player
    card2=rand()%4+1;//Randomly Generate Numbers[1,4] for Player
    card3=rand()%13+1; 
    card4=rand()%4+1;
    cardDe=rand()%13+1;//Randomly generate numbers[1,13] for Dealer 
    cardDe2=rand()%4+1;//Randomly Generate Numbers[1,4] for Dealer
    cardDe3=rand()%13+1; 
    cardDe4=rand()%4+1;
    //repeat=card1*card2;//to make sure that we do not have repeating cards
    //repeat2=card3*card4;
    //repeat3=cardDe*cardDe2;
    //repeat4=cardDe3*cardDe4;
    
    //if(repeat==repeat2||repeat3==repeat4){
      //  card1=rand()%13+1;//Randomly generate numbers[1,13] for Player
        //card2=rand()%4+1;//Randomly Generate Numbers[1,4] for Player
    //}
    //if(repeat==repeat2||repeat3==repeat4){
      //  cardDe=rand()%13+1;
        //cardDe2=rand()%13+1;
    //}
    
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
    
    switch (cardDe){
            case 1:dlrTe="Ace";break;//Switch Statement for the dealer not to be shown to player until user flips cards
            case 2:dlrTe="Two";break;
            case 3:dlrTe="Three";break;
            case 4:dlrTe="Four";break;
            case 5:dlrTe="Five";break;
            case 6:dlrTe="Six";break;
            case 7:dlrTe="Seven";break;
            case 8:dlrTe="Eight";break;           
            case 9:dlrTe="Nine";break;            
            case 10:dlrTe="Ten";break;           
            case 11:dlrTe="King";break;           
            case 12:dlrTe="Queen";break;            
            case 13:dlrTe="Jack";break;
    }
    switch (cardDe2){
            case 1:dlrNm="of Spades";break;
            case 2:dlrNm="of Hearts";break;
            case 3:dlrNm="of Clubs";break;
            case 4:dlrNm="of Diamonds";break;
    }
    switch (cardDe3){
            case 1:dlrTe2="Ace";break;
            case 2:dlrTe2="Two";break;
            case 3:dlrTe2="Three";break;
            case 4:dlrTe2="Four";break;
            case 5:dlrTe2="Five";break;
            case 6:dlrTe2="Six";break;
            case 7:dlrTe2="Seven";break;
            case 8:dlrTe2="Eight";break;           
            case 9:dlrTe2="Nine";break;            
            case 10:dlrTe2="Ten";break;           
            case 11:dlrTe2="King";break;           
            case 12:dlrTe2="Queen";break;            
            case 13:dlrTe2="Jack";break;
    }
    switch (cardDe4){
            case 1:dlrNm2="of Spades";break;
            case 2:dlrNm2="of Hearts";break;
            case 3:dlrNm2="of Clubs";break;
            case 4:dlrNm2="of Diamonds";break;
    }
    
    if(card1>10&&card1<=13){
        card1=10;
    }
    if(card3>10&&card3<=13){
        card3=10;
    }
    if(cardDe>10&&cardDe<=13){
        cardDe=10;
    }
    if(cardDe3>10&&cardDe3<=13){
        cardDe3=10;
    }
    cout<<"\n Your Cards"<<endl;
    cout<<crdTe<<" "<<card1<<" "<<crdNm<<endl;
    cout<<crdTe2<<" "<<card3<<" "<<crdNm2<<endl;
    if(card1==1){
        cout<<"Would you like to have your card be worth 1 or 11?"<<endl;
        cin>>ace;
        if(ace==1){
            card1=1;       
        }else if(ace==11){
            card1=11;   
        }          
    }
    if(card3==1){
        cout<<"Would you like to have your card be worth 1 or 11?"<<endl;
        cin>>ace;
        if(ace==1){
            card3=1;       
        }else if(ace==11){
            card3=11;   
        }          
    }
    twOne=card1+card3;
    twOne2=cardDe+cardDe3;
    cout<<"Would you like another card?"<<endl;
    cin>>choice;
    if(choice=='n'){
    cout<<dlrTe<<" "<<dlrNm<<endl;
    cout<<dlrTe2<<" "<<dlrNm2<<endl;
    }
    if(twOne==21||twOne>twOne2){
        cout<<"\n You win!"<<twOne<<" "<<twOne2<<endl;
    }else{
        cout<<"Dealer wins"<<twOne<<" "<<twOne2<<endl;
    }
    }while(choice=='Y'||choice=='y');
    //Process/Calculations Here
    
    //Output Located Here
    
    //Exit
    return 0;
}
    
