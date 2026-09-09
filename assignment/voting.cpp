/*
3. Voting Eligibility

Take a person's age and check whether they are eligible to vote.

Example:
Input: 19
Output: Eligible to vote */

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age : "<<endl;
    cin>>age;

    if(age > 18){
        cout<<"Eligible to Vote "<<endl;
    }else {
        cout<<"Not Eligible to Vote"<<endl;
    }
}