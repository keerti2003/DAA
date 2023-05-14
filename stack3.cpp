#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int>stk;
	int n,i;
	cout<<"Enter the number of element"<<endl;
	cin>>n;
	cout<<"Enter the elements of the stack"<<endl;
	for(i=0;i<n;i++){
		int s;
		cin>>s;
		stk.push(s);
	}
	int k,j=0,t1;
	cout<<"Enter the number (k)"<<endl;
	cin>>k;
	int ind1=0,ind2=1;
	while(!stk.empty()){
	    t1 = stk.top();
	    int x;
	    if(k-t1>0){
	        x = k-t1;
	    }
	    else{
	        x = t1-k;
	    }
	    stk.pop();
	    if(stk.top()==x){
	        cout<<"Pair (index): "<<ind1<<","<<ind2<<endl;
	        ind1++;ind2++;
	    }
	}
    cout << "No pair found with sum " << k << endl;
	return 0;
}
