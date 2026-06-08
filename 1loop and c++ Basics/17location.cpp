/* https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/Q*/

#include<iostream>
using namespace std;
int main(){

    long long X,Y;
    cin>>X>>Y;

    if(X == 0 && Y == 0){
        cout<<"Origin"<<endl;
    }else if(Y == 0 && X != 0){
        cout<<"X axis "<<endl;
    }else if(X == 0 && Y != 0){
        cout<<"Y axis"<<endl;
    }else if(X>0 && Y>0){
        cout<<"1st Quadrant"<<endl;
    }else if(X < 0 && Y > 0){
        cout<<"2nd Quadrant"<<endl;
    }else if(X<0 &&  Y<0){
        cout<<"3rd Quadrant"<<endl;
    }else if( X>0 && Y<0){
        cout<<"4th Quadrant"<<endl;
    }
    return 0;
}