#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
	stack<int>stk;
	cout<<"Enter the no. of elements"<<endl;
	cin>>n;
	int arr[n],arr1[n];
	int i,m;
	cout<<"Enter the elements"<<endl;
	for(i=0;i<n;i++){
		int s;
		cin>>s;
		stk.push(s);
	}
	cout<<"Enter the index of the element to be deleted"<<endl;
	cin>>m;

	for(i=0;i<m-1;i++){
	    int k = stk.top();
		stk.pop();
		arr[i] = k;
	}
	
	stk.pop();
    int j = n-m;
	for(i=0;i<j;i++){
	    int k = stk.top();
	    stk.pop();
	    arr1[i] = k;
	}
	
	 for(i=0;i<m-1;i++){
	     cout<<arr[i]<<" ";
	 } 
	 cout<<endl;
	 for(i=0;i<j;i++){
	     cout<<arr1[i]<<" ";
	 }
	cout<<endl;
	
	for(i=0;i<=m-2;i++){
	    stk.push(arr[i]);
	}
	for(i=0;i<=j-1;i++){
	    stk.push(arr1[i]);
	}
	cout<<"Stack elements"<<endl;
	while (!stk.empty())
    {
        cout << stk.top()<< " ";
        stk.pop();
    }
	return 0;
}
