/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on May 10, 2018, 9:50 AM
 * Purpose:  Hello World Template
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
    const int SIZE=5;
    string salsa[SIZE]={"Mild", "Medium", "Sweet","Hot","Zesty"};
    int jar[SIZE];
    int grtst=0,//To test for the largest Number in the list
    least=2^31-1,//Testing for the smallest Number in the list
    totSals;
    //Input or initialize values Here   
    for(int i=0;i<SIZE;i++){
        cout<<"Enter the number of jars sold for "<<salsa[i]<<endl;
        cin>>jar[i];
    }   
    for(int i=0;i<SIZE;i++){
        if(jar[i]>grtst){
            grtst=jar[i];   
        }       
    }
    for(int i=0;i<SIZE;i++){
        if(jar[i]<least){
            least=jar[i];
        }
    }
    totSals=jar[0]+jar[1]+jar[2]+jar[3]+jar[4];
    //Output Located Here
    cout<<"Sales"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<"Jars of "<<salsa[i]<<" sold: "<<jar[i]<<endl;
    }
    if(jar[0]>jar[1]&&jar[0]>jar[2]&&jar[0]>jar[3]&&jar[0]>jar[4]){cout<<"The most sold is "<<salsa[0]<<endl;}
    if(jar[1]>jar[0]&&jar[1]>jar[2]&&jar[1]>jar[3]&&jar[1]>jar[4]){cout<<"The most sold is "<<salsa[1]<<endl;}
    if(jar[2]>jar[1]&&jar[2]>jar[0]&&jar[2]>jar[3]&&jar[2]>jar[4]){cout<<"The most sold is "<<salsa[2]<<endl;}
    if(jar[3]>jar[1]&&jar[3]>jar[2]&&jar[3]>jar[0]&&jar[3]>jar[4]){cout<<"The most sold is "<<salsa[3]<<endl;}
    if(jar[4]>jar[1]&&jar[4]>jar[2]&&jar[4]>jar[3]&&jar[4]>jar[0]){cout<<"The most sold is "<<salsa[4]<<endl;}
    
    if(jar[0]<jar[1]&&jar[0]<jar[2]&&jar[0]<jar[3]&&jar[0]<jar[4]){cout<<"The least sold is "<<salsa[0]<<endl;}
    if(jar[1]<jar[0]&&jar[1]<jar[2]&&jar[1]<jar[3]&&jar[1]<jar[4]){cout<<"The least sold is "<<salsa[1]<<endl;}
    if(jar[2]<jar[1]&&jar[2]<jar[0]&&jar[2]<jar[3]&&jar[2]<jar[4]){cout<<"The least sold is "<<salsa[2]<<endl;}
    if(jar[3]<jar[1]&&jar[3]<jar[2]&&jar[3]<jar[0]&&jar[3]<jar[4]){cout<<"The least sold is "<<salsa[3]<<endl;}
    if(jar[4]<jar[1]&&jar[4]<jar[2]&&jar[4]<jar[3]&&jar[4]<jar[0]){cout<<"The least sold is "<<salsa[4]<<endl;}
    cout<<"Total Amount of Jars sold "<<totSals<<endl;
    //Exit
    return 0;
}

