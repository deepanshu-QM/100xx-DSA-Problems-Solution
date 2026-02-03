
//https://codeforces.com/group/4vcXCPx8NY/contest/668068/problem/F

#include<iostream>
using namespace std;

void BionomialCoefficent(int n,int r){
    long long fact1 = 1, fact2 = 1 ,fact3 = 1;
    int N = n - r;
    for(int i=n;i>0;i--){
        fact1 *= i;
    }

    for(int i=r;i>0;i--){
        fact2 *= i;
    }
    for(int i=N;i>0;i--){
        fact3 *= i;
    }

    long long result = (fact1)/(fact2 * fact3);
    cout<<result<<endl;

}
int main(){
    int n,r;
    cin>>n>>r;
    BionomialCoefficent(n,r);
    return 0;
}