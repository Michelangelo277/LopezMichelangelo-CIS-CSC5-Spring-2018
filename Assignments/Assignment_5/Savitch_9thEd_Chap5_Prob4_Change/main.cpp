/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on April 24, 2018, 11:25 AM
 * Purpose:  Calculate change
 */

//System Libraries Here
#include <iostream>//I/O Library
#include <cmath>//Math Library
#include <iomanip>//
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int DOLRSPN=100;//conversion from dollars to pennies
const int PENNY=1;
const int NICKEL=5;
const int DIME=10;
const int QUARTER=25;
//Function Prototypes Here
int numCoin(int, int);//Calculates number of coins
int rmndr(int, int);//Remainder after subtracting coins 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    float price, amtTndr;
    int pennies, n25, n10, n5, n1;
    //Input or initialize values Here
    price=9.14f;//Price is 9 dollars and 14 cents
    amtTndr=10.00f;//Amount paid
    //Output initial conditions
    pennies=(amtTndr-price+0.005f)*DOLRSPN;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Item Price = $"<<price<<endl;
    cout<<"Amount Tendered = $"<<amtTndr<<endl;
    cout<<"Change returned "<<pennies<<endl;
    //Calculate minimum amount of change
    n25=numCoin(pennies, QUARTER);
    pennies=rmndr(pennies, QUARTER);
    n10=numCoin(pennies, DIME);
    pennies=rmndr(pennies, DIME);
    n5=numCoin(pennies, NICKEL);
    pennies=rmndr(pennies, NICKEL);
    n1=numCoin(pennies, PENNY);
    pennies=rmndr(pennies, PENNY);
    //Output Located Here
    

    cout<<"Number of Quarters = "<<n25<<endl;
    cout<<"Number of Dimes = "<<n10<<endl;
    cout<<"Number of Nickel = "<<n5<<endl;
    cout<<"Number of Pennies = "<<n1<<endl;
    //Exit
    return 0;
}

int rmndr(int pennies, int denom){
    return pennies-numCoin(pennies,denom)*denom;//Number of coins of that denomination
}

int numCoin(int pennies, int denom){
    return pennies/denom;//Number of coins of that denomination
}
