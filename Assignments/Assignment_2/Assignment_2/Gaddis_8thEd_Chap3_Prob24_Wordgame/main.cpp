/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on March 8, 2018, 11:23 AM
 * Purpose:  Math Tutor 
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PERCENT=100.0f;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //set the random number seed
 
    //Declare all Variables Here
    string name, age, city, college, prfssn, animal, petName;

    //Input or initialize values Here
    cout<<"Input your name"<<endl;
    cin>>name;
    cout<<"Input your age"<<endl;
    cin>>age;
    cout<<"Input a city"<<endl;
    cin>>city;
    cout<<"Input a college"<<endl;
    cin>>college;
    cout<<"Input a profession"<<endl;
    cin>>prfssn;
    cout<<"Input the name of an animal"<<endl;
    cin>>animal;
    cout<<"Input a pet name"<<endl;
    cin>>petName;
    //Process/Calculations Here

    //Output Located Here
    cout<<"There once was someone named "<<name<<" who lived in "<<city<<". At the age of "
            <<age<<" "<<name<<" went to "<<college<<". "<<name<<" graduated and began work as a "<<
            prfssn<<", then adopted a "<<animal<<" named "<<petName<<" and they lived happily ever after."<<endl;

    //Exit
    return 0;
}

