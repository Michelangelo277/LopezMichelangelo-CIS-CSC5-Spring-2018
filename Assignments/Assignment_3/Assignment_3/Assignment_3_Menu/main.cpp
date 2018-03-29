/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on March 22, 2018, 7;53 AM
 * Purpose: Menu with 9 problems from the gaddis book
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    cout<<"Choose the project you want to view."<<endl;
    cout<<"type 1 for the first project"<<endl;
    cout<<"type 2 for the second project"<<endl;
    cout<<"type 3 for the third project"<<endl;       
    cout<<"type 4 for the forth project"<<endl;
    cout<<"type 5 for the fifth project"<<endl;
    cout<<"type 6 for the sixth project"<<endl;       
    cout<<"type 7 for the seventh project"<<endl;  
    cout<<"type 8 for the eighth project"<<endl;
    cout<<"type 9 for the ninth project"<<endl;       
 
    cin>>choice;
    //Input or initialize values Here
    if (choice>='1' && choice<='9'){
        switch(choice){
            case '1':{
              cout<<"This program decides which of 2 numbers a user inputs is greater than the other"<<endl;
            //Declare all Variables Here
            int a,//first variable that the user inputs 
             b;//second variable that the user inputs
            //Input or initialize values Here
            cout<<"Input two numbers."<<endl;
            cin>>a>>b;
    
            if(a==b){
            cout<<a<<" and "<<b<<" are equal"<<endl;
                }else{
                 a>b?cout<<a<<" is greater than "<<b:cout<<b<<" is greater than "<<a<<endl;
                }
                break;
            }
           
             case '2':{
                 cout<<"This program can see which area of 2 triangles is larger"<<endl;
                 //Declare Variables
                 int lngth1, lngth2, w1, w2, a1, a2;
                 cout<<"Please input the length of rectangle 1 in feet"<<endl;
                 cin>>lngth1;
                 cout<<"Please input the width of rectangle 1 in feet"<<endl;
                 cin>>w1;
                 cout<<"Please input the length of rectangle 2 in feet"<<endl;
                 cin>>lngth2;
                 cout<<"Please input the width of rectangle 2 in feet"<<endl;
                 cin>>w2;
                 a1=lngth1*w1;
                 a2=lngth2*w2;    
                 if(a1==a2){
                 cout<<a1<<" and "<<a2<<" are equal"<<endl;
                      }else{
                      a1>a2?cout<<a1<<" is greater than "<<a2:cout<<a2<<" is greater than "<<a1<<endl;
                      }        
                 
                break;
            }
              case '3':{
              cout<<"This program detects if a user inputs a day and a day."
                      " If both times each other is equal to the last two"
                      "digits of the year"<<endl;
              int a, b, c, d;
              cout<<"Input a month"<<endl;
              cin>>a;
              cout<<"Input a day in the month"<<endl;
              cin>>b;
              cout<<"Input a 2 digit year"<<endl;
              cin>>c;
              d=a*b;
              d==c?cout<<"Your date is magic":cout<<"Your date isn't magic"<<endl;
              
                break;
            }
               case '4':{
               cout<<"This program detects if the weight(in pounds)"
                       " is too heavy or too light"<<endl; 
               float weight, mass, gravity=9.8f;
               cout<<"Input the mass of the object"<<endl;
               cin>>mass;
               weight=mass*gravity;
               weight>1000.0?cout<<"The object is too heavy":weight<10.0?cout<<""
                       "The object is too light":cout<<"Your object weights "<<weight<<"lbs"<<endl;
               
                break;
            }
               case '5':{
               cout<<"This program outputs a color made from 2 of the 3 primary colors"<<endl;
               string color1, color2, blue, red, yellow;
               cout<<"input color 1"<<endl;
               cin>>color1;
               cout<<"input color 2"<<endl;
               cin>>color2;
               color1=="blue"&&color2=="red"?cout<<"Purple":color1=="red"&&color2=="yellow"?cout<<"Orange":color1=="blue"&&color2=="yellow"?cout<<"Green":cout<<"error";
                
                break;
            }   
               case '6':{
               cout<<"This program can display the amount of seconds and "
                           "convert them into minutes and hours"<<endl;
               int sec;
                   cout<<"Input an amount of seconds"<<endl;
                   cin>>sec;
                   if(sec<60){
                       cout<<sec<<" seconds"<<endl;
                   }else if(sec<3600&&sec>=60){
                       cout<<sec/60<<" mins"<<endl;
                   }else if(sec<86400&&sec>=3600){
                       cout<<sec/3600<<" hours"<<endl;
                   }else if(sec>=86400){
                       cout<<sec/86400<<" days"<<endl;
                   }    
                       
                
                break;
            }
               case '7':{
               cout<<"This program is a game that takes cent values and sees if they equal a dollar"<<endl;
               int penny, quarter, nickel, dime, result;
               cout<<"Input an amount of Pennies"<<endl;
               cin>>penny;
               cout<<"Input an amount of Nickels"<<endl;
               cin>>nickel;
               nickel*=5;
               cout<<"Input an amount of Dimes"<<endl;
               cin>>dime;
               dime*=10;
               cout<<"Input an amount of quarters"<<endl;
               cin>>quarter;
               quarter*=25;
               result=penny+nickel+dime+quarter;
               if(result==100){
                   cout<<"Congratulations you have a dollar!"<<endl;
               }else{
                   cout<<"You have gone over a dollar"<<endl;
               }
               
                break;
            }
               case '8':{
               srand(static_cast<unsigned int>(time(0)));

               unsigned short op1, op2, stuAns, correct;
     
               op1=rand()%900+100;//between 100 and 999 [100,999]
               op2=rand()%999+1;//[1,999]
               cout<<"This is a simple math tutor program"<<endl;
               cout<<"Input the Answer to the following addition problem"<<endl;
               cout<<setw(5)<<op1<<endl;
               cout<<"+ "<<setw(3)<<op2<<endl;
               cout<<"------"<<endl;
               correct=op1+op2;
               cout<<((correct>100)?"  ":"   ");
               cin>>stuAns;
               cout<<endl<<(stuAns==correct?"Correct Answer":"Wrong answer")<<endl;
                
                break;
            }
               case '9':{
               cout<<"This is a program that calculates the points earned in a book club"<<endl;
               int books;
               cout<<"Input the amount of books you've bought this month"<<endl;
               cin>>books;
               if(books==0){
                   cout<<"You have 0 points"<<endl;
               }
               if(books==1){
                   cout<<"You have 5 points"<<endl;
               }
               if(books==2){
                   cout<<"You have 15 points"<<endl;
               }
               if(books==3){
                   cout<<"You have 30 points"<<endl;
               }
               
               if(books>=4){
                   cout<<"You have 60 points"<<endl;
               }
                
                break;
            }
        }
    }else{
        cout<<"Exiting menu"<<endl;
    }
    //Process/Calculations Here

    //Output Located Here
  
    //Exit
    return 0;
}
 
