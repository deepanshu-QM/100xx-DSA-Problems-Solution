
/*Find the Count of the target Element in an array */

#include<iostream>
using namespace std;

int main(){
    int n;  //size
    cin>>n;
    int list[n];
    for(int i=0;i<n;i++){
        cin>>list[i];
    }

    int targetElm;
    cin>>targetElm;
   
    int count = 0;
    for(int i=0;i<n;i++){
        if(list[i] == targetElm){
            count++;
        }
    }
    cout<<"Target Element Count : "<<targetElm<<endl;
    return 0;
}