/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on May 10, 2018, 9:50 AM
 * Purpose:  Least and Greatest Numbers in a list
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int binSrch(int [], int, int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=10;
    int input;
    int valid[]={13579,26791,26792,33445,55555
                ,62483,77777,79422,85647,93121};
    //Input The Values
    
    cout<<"Input your Lucky Numbers"<<endl;
    cin>>input;

    //Output The Smallest and Largest Numbers in the List
    int find=input;
    cout<<find<<" Was the lucky Number in week "<<binSrch(valid,SIZE, find)<<endl;
    //Exit
    return 0;
}
int binSrch(int a[], int n, int val){
    //Declare and Initialize Variables
    int beg, end, middle;
    beg=0;
    end=n;
    //loop and find 
    do{
        middle=(end+beg)/2;
        if(a[middle]==val)return middle;
        else if(a[middle]>val){
            end=middle-1;
        }else{
            beg=middle+1;
        }
    }while(end>=beg);
    return -1;
}