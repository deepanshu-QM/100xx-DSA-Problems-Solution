#include <bits/stdc++.h>
using namespace std;

int  SecondLargestNumber(int arr[] ,int size){
    int largest = INT_MIN;
    int Secondlargest = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i] > largest){
            Secondlargest = largest;
            largest = arr[i];
        }else if(arr[i] > Secondlargest && arr[i] != largest){
            Secondlargest = arr[i];
        }
    }
    return Secondlargest;
}
int main() {
	int size;
	cin>>size;
	
	int arr[size] = {21,90,45,67,89,32,48,66,40};
	int res = SecondLargestNumber(arr ,size);
	cout<<res<<endl;
	return 0;
}
