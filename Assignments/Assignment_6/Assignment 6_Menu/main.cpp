/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on March 22, 2018, 7;53 AM
 * Purpose: Menu with 9 problems from the gaddis book
 */

//System Libraries Here
#include <iostream>//I/O 
#include <iomanip>// Format
#include <cstdlib>//sRand
#include <ctime>//time
#include <cmath>//Power
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int binSrch(int [], int, int);
void mrkSort(float [],int);
void swap(int &,int &);
void smlList(float [],int,int);
void prntAry(float [],int,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    char choice;
    do{
    cout<<"Choose the project you want to view."<<endl;
    cout<<"type 0 for the first project"<<endl;
    cout<<"type 1 for the second project"<<endl;
    cout<<"type 2 for the third project"<<endl;
    cout<<"type 3 for the forth project"<<endl;       
    cout<<"type 4 for the fifth project"<<endl;
    cout<<"type 5 for the sixth project"<<endl;
    cout<<"type 6 for the seventh project"<<endl;       
    cout<<"type 7 for the eighth project"<<endl;  
    cout<<"type 8 for the ninth project"<<endl;
    cout<<"type 9 for the tenth project"<<endl;       
 
    cin>>choice;
    //Input or initialize values Here
    
    if (choice>='0' && choice<='9'){
        switch(choice){
            case '0':{
            //Declare all Variables Here
            const int VALUE=10;
            int x[VALUE];
            int grtst=0,//To test for the largest Number in the list
            least=2^31-1;//Testing for the smallest Number in the list
            //Input The Values
            cout<<"Enter 10 values and this program will output the greatest value inputed"<<endl;
            for(int i=0;i<10;i++){
                cin>>x[i];
            }
            //Print out the Numbers in the Array 
            for(int i=0;i<10;i++){
            cout<<"Number "<<i+1<<" = "<<x[i]<<endl;
            }
            //For Loops to check for the Greatest and Least
            for(int i=0;i<10;i++){
                if(x[i]>grtst){
                    grtst=x[i];
                }
            }
            for(int i=0;i<10;i++){
                if(x[i]<least){
                    least=x[i];
                }
            }
            //Output The Smallest and Largest Numbers in the List
            cout<<"The Largest Number in the list "<<grtst<<endl;
            cout<<"The Smallest Number in the list "<<least<<endl;
            //Exit
                break;
            }
            case '1':{
            //Declare all Variables Here
            const int SIZE=20;
            int score;
            char q[SIZE];//Student Answer List
            char a[SIZE]={'A', 'D', 'B','B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'D', 'B'};//Answer List
            //Input The Values

            for(int i=0;i<SIZE;i++){
                cout<<"Enter Answer for Question "<<i+1<<endl;
                cin>>q[i];
            }
            for(int i=0;i<SIZE;i++){
                if(q[i]==a[i]){
                    score+=1;
                }
            }


            //Output The Score and if they passed or failed
            if(score>=15){
                cout<<"The student passed with a score of "<<score<<"/20"<<endl;
            }
            if(score<15){
                cout<<"The student failed with a score of "<<score<<"/20"<<endl;
            }
            //Exit
                break;
            }
            case '2':{
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
                break;
            }
            case '3':{           
            //Declare all Variables Here
            const int SIZE=5;
            int score;
            int lottery[SIZE];//Student Answer List
            int user[SIZE];//Answer List
            //Input The Values
            for(int i=0;i<SIZE;i++){
                lottery[i]=rand()%9+1;
            }
            cout<<"Enter your first number"<<endl;
            for(int i=0;i<SIZE;i++){
                cout<<i+1<<"/5 left"<<endl;
                cin>>user[i];
            }
            for(int i=0;i<SIZE;i++){
                if(lottery[i]==user[i]){
                    score+=1;
                }
            }
            //Output The Score and if they passed or failed
            if(score==5){
                cout<<"Congrats you won the Grand Prize! "<<endl;
            }else{
                cout<<"Sorry you didn't choose the winning numbers"<<endl;
            }
            //Exit
                break;
            }
            case '4':{
            //Declare all Variables Here
            const int SIZE=12;
            float mthRain[SIZE], totRain, avrRain;
            int biggest=0, smallst=2^31-1;//Checking for Largest, Smallest, Average, and total Rainfall
            //Input or initialize values Here
            cout<<"Enter each amount of rainfall for 12 months."<<endl;
            for(int i=0;i<SIZE;i++){
                cin>>mthRain[i];
            }
            //Process/Calculations Here
            totRain=mthRain[0]+mthRain[1]+mthRain[2]+mthRain[3]+mthRain[4]+mthRain[5]+mthRain[6]+mthRain[7]+mthRain[8]+mthRain[9]+mthRain[10]+mthRain[11];
            avrRain=totRain*0.083f;
            for(int i=0;i<SIZE;i++){
                if(mthRain[i]>biggest){
                    biggest=mthRain[i];
                }
            }
            for(int i=0;i<SIZE;i++){
                if(mthRain[i]<smallst){
                    smallst=mthRain[i];
                }
            }
            //Output The Smallest and Largest Numbers in the List
            cout<<"The Total Rainfall is "<<totRain<<endl;
            cout<<"The Average Rainfall is "<<avrRain<<endl;
            cout<<"The Greatest amount of rainfall in "<<biggest<<endl;
            cout<<"The Least amount of rainfall in "<<smallst<<endl;
            //Exit
                break;
            }   
            case '5':{
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
                break;
            }
            case '6':{
            //Declare all Variables Here
            const int SIZE=18;
            int input;
            int valid[]={5658845,4520125,7895122,877541,8451277,1302850
                           ,8080152,4562555,5552012,5050552,7825877,1250255
                           ,1005231,6545231,3852085,7576651,7881200,4281002};
            //Input The Values
            cout<<"Input a valid value"<<endl;
            cin>>input;
            //Output The Smallest and Largest Numbers in the List
            for(int i=0;i<SIZE;i++){
                if(input==valid[i]){
                    cout<<"The number you input is valid"<<endl;
                }
                if(input!=valid[i]){
                    cout<<"The number you input is invalid"<<endl;
                }
            } 
            //Exit
                break;
            }
            case '7':{
            //Declare all Variables Here
            const int SIZE=10;
            int input;
            int valid[]={13579,26791,26792,33445,55555
                        ,62483,77777,79422,85647,93121};
            //Input The Values

            cout<<"Input your Lucky Numbers"<<endl;
            cin>>input;

            //Output The Smallest and Largest Numbers in the List
            for(int i=0;i<SIZE;i++){
                if(input==valid[i]){
                    cout<<"You won week "<<i+1<<endl;
                }
            }
            //Exit
                break;
            }
            case '8':{
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
                break;
            }
            case '9':{
            //Declare all Variables Here
            const int SIZE=12;
            float mthRain[SIZE], totRain, avrRain;
            int biggest=0, smallst=2^31-1;//Checking for Largest, Smallest, Average, and total Rainfall
            //Input or initialize values Here
            cout<<"Enter each amount of rainfall for 12 months."<<endl;
            for(int i=0;i<SIZE;i++){
                cin>>mthRain[i];
            }
            //Process/Calculations Here
            totRain=mthRain[0]+mthRain[1]+mthRain[2]+mthRain[3]+mthRain[4]+mthRain[5]+mthRain[6]+mthRain[7]+mthRain[8]+mthRain[9]+mthRain[10]+mthRain[11];
            avrRain=totRain*0.083f;
            for(int i=0;i<SIZE;i++){
                if(mthRain[i]>biggest){
                    biggest=mthRain[i];
                }
            }
            for(int i=0;i<SIZE;i++){
                if(mthRain[i]<smallst){
                    smallst=mthRain[i];
                }
            }

            //Output The Smallest and Largest Numbers in the List
            cout<<"The Total Rainfall is "<<totRain<<endl;
            cout<<"The Average Rainfall is "<<avrRain<<endl;
            cout<<"The Greatest amount of rainfall in "<<biggest<<endl;
            cout<<"The Least amount of rainfall in "<<smallst<<endl;
            mrkSort(mthRain, SIZE);
            //Output Located Here
            prntAry(mthRain,SIZE,12);

            //Exit
                break;
            }
        }
    }else{
        cout<<"Exiting menu"<<endl;
    }
    }while(choice>'9'&&choice<'0');
    //Process/Calculations Here

    //Output Located Here
  
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


void mrkSort(float a[],int n){
    for(int i=0;i<n-1;i++){
        smlList(a,n,i);
    }
}
void smlList(float a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[i]<a[pos])swap(a[i],a[pos]);
    }
}
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prntAry(float a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
