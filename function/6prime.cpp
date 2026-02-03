
//https://codeforces.com/group/4vcXCPx8NY/contest/668068/problem/G
#include<iostream>
using namespace std;

void PrimeOrNot(int N){
    for(int num = 2; num <= N; num++){
        bool prime = true;
        
       
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                prime = false;
                break;
            }
        }
        
      
        if(prime){
            cout << num << " ";
        }
    }
}

int main(){
    int N;
    cin >> N;
    PrimeOrNot(N);
    return 0;
}