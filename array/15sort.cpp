
/* https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/H*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int n; //size
        cin>>n;

        int zeros = 0;
        int ones = 0;
        int N[n];
        for(int j=0;j<n;j++){
            cin>>N[i];

            if(N[i] == 0)
                zeros++;
             else 
                ones++;
            
        }

        for(int i=0;i<zeros;i++){
            cout<<"0"<<" ";
        }

        for(int i=0;i<ones;i++){
            cout<<"1"<<" ";
        }
        cout<<endl;
    }
}