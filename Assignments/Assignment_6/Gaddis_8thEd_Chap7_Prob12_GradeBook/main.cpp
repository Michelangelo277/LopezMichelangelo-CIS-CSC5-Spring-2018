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

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=5,SIZE2=4;
    int score;
    string student[SIZE];
    char grade[SIZE]={'A','B','C','D','F'},stGrade[SIZE2];
    float tstScrs1[SIZE2],tstScrs2[SIZE2],tstScrs3[SIZE2],tstScrs4[SIZE2],tstScrs5[SIZE2];
    int avgTest1, avgTest2, avgTest3, avgTest4, avgTest5;
    //Input The Values
    
    for(int i=0;i<SIZE;i++){
        cout<<"Enter the "<<i+1<<" Student name"<<endl;
        cin>>student[i];       
    }
    for(int i=0;i<SIZE2;i++){
        cout<<"Enter the "<<i+1<<" test score of "<<student[0]<<endl;
        cin>>tstScrs1[i];
    }
    for(int i=0;i<SIZE2;i++){
        cout<<"Enter the "<<i+1<<" test score of "<<student[1]<<endl;
        cin>>tstScrs2[i];
    }
    for(int i=0;i<SIZE2;i++){
        cout<<"Enter the "<<i+1<<" test score of "<<student[2]<<endl;
        cin>>tstScrs3[i];
    }
    for(int i=0;i<SIZE2;i++){
        cout<<"Enter the "<<i+1<<" test score of "<<student[3]<<endl;
        cin>>tstScrs4[i];
    }
    for(int i=0;i<SIZE2;i++){
        cout<<"Enter the "<<i+1<<" test score of "<<student[4]<<endl;
        cin>>tstScrs5[i];
    }
    
    //Finding the average test scores
    avgTest1=(tstScrs1[0]+tstScrs1[1]+tstScrs1[2]+tstScrs1[3]+tstScrs1[4])*0.25;
    cout<<avgTest1<<endl;
    avgTest2=(tstScrs2[0]+tstScrs2[1]+tstScrs2[2]+tstScrs2[3]+tstScrs2[4])*0.25;
    cout<<avgTest2<<endl;
    avgTest3=(tstScrs3[0]+tstScrs3[1]+tstScrs3[2]+tstScrs3[3]+tstScrs3[4])*0.25;
    cout<<avgTest3<<endl;
    avgTest4=(tstScrs4[0]+tstScrs4[1]+tstScrs4[2]+tstScrs4[3]+tstScrs4[4])*0.25;
    cout<<avgTest4<<endl;
    avgTest5=(tstScrs5[0]+tstScrs5[1]+tstScrs5[2]+tstScrs5[3]+tstScrs5[4])*0.25;
    cout<<avgTest5<<endl;
    for(int i=0;i<SIZE;i++){
    if(avgTest1>=90||avgTest2>=90||avgTest3>=90||avgTest4>=90||avgTest5>=90){
        stGrade[i]=grade[0];
    }else if(avgTest1>80||avgTest2>80||avgTest3>80||avgTest4>80||avgTest5>80){
        stGrade[i]=grade[1];
    }else if(avgTest1>70||avgTest2>70||avgTest3>70||avgTest4>70||avgTest5>70){
        stGrade[i]=grade[2];
    }else if(avgTest1>60||avgTest2>60||avgTest3>60||avgTest4>60||avgTest5>60){
        stGrade[i]=grade[3];
    }else if(avgTest1<60||avgTest2<60||avgTest3<60||avgTest4<60||avgTest5<60){
        stGrade[i]=grade[4];
    }
    cout<<grade[i]<<endl;
    }
    //Output The Score and 
    cout<<student[0]<<"'s Average Score = "<<avgTest1<<endl<<"Student's Grade = "<<grade[0]<<endl;
    cout<<student[1]<<"'s Average Score = "<<avgTest2<<endl<<"Student's Grade = "<<grade[1]<<endl;
    cout<<student[2]<<"'s Average Score = "<<avgTest3<<endl<<"Student's Grade = "<<grade[2]<<endl;
    cout<<student[3]<<"'s Average Score = "<<avgTest4<<endl<<"Student's Grade = "<<grade[3]<<endl;
    cout<<student[4]<<"'s Average Score = "<<avgTest5<<endl<<"Student's Grade = "<<grade[4]<<endl;
    //Exit
    return 0;
}

