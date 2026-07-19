
#include<bits/stdc++.h>
using namespace std;

int main(){
    int numb[] = {21,23,67,90,11,-11,-34,89};
    int size = sizeof(numb)/sizeof(int);
    int smallest = INT_MAX;
    
    for(int i=0;i<size;i++){
        smallest = min(numb[i], smallest);
    }
    cout<<smallest<<endl;
    return 0;
}