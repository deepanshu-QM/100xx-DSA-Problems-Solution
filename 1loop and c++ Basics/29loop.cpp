
//https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/L

#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   if(n== 0){
       cout<<0<<endl;
       return 0;
   }

    long long rev = 0;
    while(n!=0){
      rev = (rev * 10) + (n % 10);
        n = n/10;
    }
    cout<<rev<<endl;
    return 0;
}