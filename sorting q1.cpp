#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>arr;
	cout<<"Enter the number of elements "<<endl;
	int n,i,temp;
	cin>>n;
	for(i=0;i<n;i++){
		arr.pushback(i);
	}
	for(i=0;i<n;i=i+2){
		for(j=i+2;j<n;j=j+2){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
