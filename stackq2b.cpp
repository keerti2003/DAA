#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int>stk;
	int n,i,arr[n];
	cout<<"Enter the number of element"<<endl;
	cin>>n;
	cout<<"Enter the elements of the stack"<<endl;
	for(i=0;i<n;i++){
		int s;
		cin>>s;
		stk.push(s);
	}
	int j=1,k=0;
	while(!stk.empty()){
		if(j%2!=0){
			arr[k] = stk.top();
			stk.pop();
			j++;k++;
		}
		else{
			stk.pop();
			j++;
		}
	}
	
	for(i=0;i<n/2+1;i++){
		stk.push(arr[i]);
	}
	cout<<"Stack elements"<<endl;
	while(!stk.empty()){
		cout<<stk.top()<<" ";
		stk.pop();
	}
	return 0;
}
