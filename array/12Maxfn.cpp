

#include<bits/stdc++.h>
using namespace std;

int main(){
    int numb[] = {21,23,67,90,11,-11,-34,89};
    int size = sizeof(numb)/sizeof(int);
    int largest = INT_MIN;
    
    for(int i=0;i<size;i++){
        largest = max(numb[i], largest);
    }
    cout<<largest<<endl;
    return 0;
}