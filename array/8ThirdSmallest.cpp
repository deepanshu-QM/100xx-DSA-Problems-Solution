#include <bits/stdc++.h>
using namespace std;

int  SecondSmallestNumber(int arr[] ,int size){
    int smallest = INT_MAX;
    int Secondsmallest = INT_MAX;
    int ThirdSmallest = INT_MAX;
    for(int i=0;i<=size;i++){
        if(arr[i] < smallest){
            ThirdSmallest = Secondsmallest;
            Secondsmallest = smallest;
            smallest = arr[i];
        }else if(arr[i] < Secondsmallest && arr[i] != Secondsmallest){
            ThirdSmallest = Secondsmallest;
            Secondsmallest = arr[i];
        }else if(arr[i] < ThirdSmallest && arr[i] != Secondsmallest && arr[i] != smallest){
            ThirdSmallest = arr[i];
        }
    }
    return ThirdSmallest;
}
int main() {
	int size;
	cin>>size;
	
	int arr[size] = {21,90,45,67,89,32,48,66,40};
	int res = SecondSmallestNumber(arr ,size);
	cout<<res<<endl;
	return 0;
}
