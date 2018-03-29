
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
    float item1, item2, item3, item4, item5, subTotl, salsTax, total;
        //Initial Variables
    item1=15.95;
    item2=24.95;
    item3=6.96;
    item4=12.95;
    item5=3.95;
        //Map/Process Inputs to Outputs
    subTotl=item1+item2+item3+item4+item5;
    salsTax=subTotl*0.07;
    total=subTotl+salsTax;
        //Display Outputs 
        cout<<"The Price of item 1: $ "<<item1<<endl;
        cout<<"The Price of item 2: $ "<<item2<<endl;
        cout<<"The Price of item 3: $ "<<item3<<endl;
        cout<<"The Price of item 4: $ "<<item4<<endl;
        cout<<"The Price of item 5: $ "<<item5<<endl;
        cout<<"The Subtotal: $ "<<subTotl<<endl;
        cout<<"The Sales Tax: $ "<<salsTax<<endl;
        cout<<"The Total $ "<<total<<endl;
        //Exit program

    return 0;
}

