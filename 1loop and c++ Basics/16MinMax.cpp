/* https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/O */

#include<iostream>
using namespace std;
int main(){
    long long A,B,C;
    cin>>A>>B>>C;

    cout<<"Min = "<<min(A, min(B,C))<<endl;
    cout<<"Max = "<<max(A,max(B,C))<<endl;

    return 0;
}

