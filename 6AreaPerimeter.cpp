
// https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/F

#include<iostream>
using namespace std;

int main(){
    int length, breadth;
    cin>>length>>breadth;

    cout<<"Area : "<<length*breadth<<endl;
    cout<<"Perimeter : "<<2*(length + breadth)<<endl;

    return 0;
}