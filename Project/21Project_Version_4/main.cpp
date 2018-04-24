/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on April 19, 2018, 9:08 AM
 * Purpose:  Blackjack Project Version 2
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
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
    int card1, card2, card3, card4,//Player's cards
        cardDe, cardDe2, cardDe3, cardDe4,//Dealer's cards
        cardEx, cardEx2,//Extra cards for the player
        credits=1000,//dollars
        twOne, twOne2,//Values to check the winner 
        ace;//value to determine which value an ace can be
    string crdNm, crdTe, crdNm2, crdTe2, 
           dlrNm, dlrTe, dlrNm2, dlrTe2,
           crdAd, crdAd2, crdAd3, crdAd4; 
    cout<<"Welcome to Blackjack!"<<endl;
    cout<<"Press any key to start"<<endl;   
    do{
    //Input or initialize values Here
    cin>>choice;
    card1=rand()%13+1;//Randomly generate numbers[1,13] for Player's first card
    card2=rand()%4+1;//Randomly Generate Numbers[1,4] for Player's first card
    card3=rand()%13+1;//Randomly Generate Numbers[1,13] for Player's second card
    card4=rand()%4+1;//Randomly Generate Numbers[1,4] for Player's second card
    cardDe=rand()%13+1;//Randomly generate numbers[1,13] for Dealer's first card 
    cardDe2=rand()%4+1;//Randomly Generate Numbers[1,4] for Dealer's first card
    cardDe3=rand()%13+1; //Randomly Generate Numbers[1,13] for Dealer's second card
    cardDe4=rand()%4+1;//Randomly Generate Numbers[1,4] for Dealer's second card
    cardEx=rand()%13+1;//Randomly generate numbers[1,13] for Player
    cardEx2=rand()%4+1;//Randomly Generate Numbers[1,4] for Player
        if(card1==card3&&card2==card4){//if any of the cards repeat then it will generate another pair of numbers for each card
            card1=rand()%13+1;//Randomly generate unique numbers[1,13] for Player
            card2=rand()%4+1;//Randomly Generate unique number[1,4] for Player
            card3=rand()%13+1; //Randomly generate unique numbers[1,13] for Player
            card4=rand()%4+1;//Randomly generate unique numbers[1,4] for Player
        }
        if(cardDe==cardDe3&&cardDe2==cardDe4){//if any of the dealer's cards repeat then it will generate another pair of numbers
            cardDe=rand()%13+1;//Randomly generate numbers[1,13] for Dealer 
            cardDe2=rand()%4+1;//Randomly Generate Numbers[1,4] for Dealer
            cardDe3=rand()%13+1; 
            cardDe4=rand()%4+1;
        }
            switch (card1){//Switch Statement to show the user which card they drew Ace to Jack
                    case 1:crdTe="Ace";break;
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
            switch (card2){//Switch statement to show the user what type of card they drew from Spades, Hearts, Clubs or diamonds
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

            switch (cardDe){//Switch Statement for the dealer not to be shown to player until user inputs all their choices
                    case 1:dlrTe="Ace";break;
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
        if(card1>10&&card1<=13){//Allow any of the face card's values be equal to 10 for the first card
            card1=10;
        }
        if(card3>10&&card3<=13){//Allow any of the face card's values be equal to 10 for the second card
            card3=10;
        }
        if(cardDe>10&&cardDe<=13){
            cardDe=10;
        }
        if(cardDe3>10&&cardDe3<=13){
            cardDe3=10;
        }
        cout<<"\n Your Cards"<<endl;//Display User's cards and money
        cout<<crdTe<<" "<<" "<<crdNm<<endl;
        cout<<crdTe2<<" "<<" "<<crdNm2<<endl;
        cout<<endl<<"Your Money: \n $"<<credits<<endl;
        if(card1==1){//If the user draws an Ace card they can choose if it's value
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
        twOne=card1+card3;//Add up the User's card Values
        twOne2=cardDe+cardDe3;//Add up the Dealer's card Values
        cout<<"Would you like another card?"<<endl;
        cin>>choice;
        if(choice=='Y'||choice=='y'){
            twOne=card1+card3+cardEx;//Add up the User's card Values if they choose to draw another card
            switch (cardEx){
                case 1:crdAd="Ace";break;//Switch Statement to show the user which card they drew
                case 2:crdAd="Two";break;
                case 3:crdAd="Three";break;
                case 4:crdAd="Four";break;
                case 5:crdAd="Five";break;
                case 6:crdAd="Six";break;
                case 7:crdAd="Seven";break;
                case 8:crdAd="Eight";break;           
                case 9:crdAd="Nine";break;            
                case 10:crdAd="Ten";break;           
                case 11:crdAd="King";break;           
                case 12:crdAd="Queen";break;            
                case 13:crdAd="Jack";break;
        }
            switch (cardEx2){
                case 1:crdAd2="of Spades";break;
                case 2:crdAd2="of Hearts";break;
                case 3:crdAd2="of Clubs";break;
                case 4:crdAd2="of Diamonds";break;

            }
        }
        cout<<crdAd<<" "<<crdAd2<<endl;//Display New card User drew
        if(card1==1&&twOne>21){//Set the ace value to 1 if the user choose it to be 11 and user's card value is greater than 21     
                card1=1;   
            }          
        if(card3==1&&twOne>21){
                card3=1;       
        }
        cout<<endl<<"Dealer's hand \n"<<endl;//Display Dealer's hand once all choices have been entered
        cout<<dlrTe<<" "<<dlrNm<<endl;
        cout<<dlrTe2<<" "<<dlrNm2<<endl;
        
        if(twOne==21||twOne>twOne2&&twOne<21){//If the User's card value total is equal to 21 or is greater than the dealer's card value display if they won       
            credits+=100;//add 100 to the user's credits
            cout<<"\n You win! "<<twOne<<" "<<twOne2<<" $"<<credits<<endl;
        }else if(twOne>21||twOne2>twOne){//Else if the user's card total is greater than 21 or less than the dealer's display they've lost
            credits-=100;//subtract 100 from the user's credits
            cout<<"Dealer wins "<<twOne<<" "<<twOne2<<" $"<<credits<<endl;
        } 
    cout<<"Press any key to play again"<<endl;
    }while(credits!=0);//Allow the user to play while they have money
    
    //Output Located Here
    cout<<"Game Over"<<endl;
    //Exit
    return 0;
}
    
