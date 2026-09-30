
/*
finding THE NOT repeat value in  an array */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans;

    int list[n];
    for(int i=0;i<n;i++){
        cin>>list[i];

        int target = list[i];
        int count = 0;

        for(int j=0;j<n;j++){
            if(list[j] == target){
                count++;
            }
        }
        if(count == 0){
            ans = list[i];
            break;
        }
    }
    cout<<"Target Element : "<<ans<<endl;
    return 0;

}