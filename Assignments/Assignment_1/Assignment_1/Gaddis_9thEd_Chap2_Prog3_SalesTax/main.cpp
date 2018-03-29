
/* 
 * File:   main.cpp
 * Author: Lopez, Michelangelo
 * Created on March 4, 2018
 * purpose: Hold prices of 5 items subtotal sales tax and total given 
 * the sales tax is 7%
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries 

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Colum

//Function Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {
        //Declare Variables 
    float itemPrc, taxCont, taxStat, totlSal;
        //Initial Variables
    itemPrc=95;
        //Map/Process Inputs to Outputs
    taxStat=itemPrc*0.02;
    taxCont=itemPrc*0.04;
    totlSal=taxCont+taxStat;
        //Display Outputs 
        cout<<"The Price of item: $ "<<itemPrc<<endl;
        cout<<"The Country tax: $ "<<taxCont<<endl;
        cout<<"The State tax $ "<<taxStat<<endl;
        cout<<"The total sales tax: $"<<totlSal<<endl;
        //Exit program

    return 0;
}

