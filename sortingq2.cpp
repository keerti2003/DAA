#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>arr;
	cout<<"Enter the number of elements "<<endl;
	int n,i,j,temp,ele,n1,n2;
	cin>>n;
	vector<int>A;
	vector<int>B;
	vector<int>C;
	if (n%2==0){
		n1 = n/2;
		n2 = n/2;		
	}
	else{
		n1 = (n/2)+1;
		n2 = n - n1;
	}
	cout<<"Enter the elements of Array A "<<endl;
	for(i=0;i<n1;i++){
		int s;
		cin>>s;
		A.push_back(s);
	}
	cout<<"Enter the elements of Array B "<<endl;
	for(i=0;i<n2;i++){
		int s;
		cin>>s;
		B.push_back(s);
	}
	for(i=0;i<n1;i++){
		for(j=i+1;j<n1;j++){
		    if(A[j]<A[i]){
		        temp = A[i];
		    	A[i] = A[j];
			    A[j] = temp;

		    }
		}
	}
	
	cout<<"Enter the elements of A: "<<endl;
	for(i=0;i<n1;i++){
		cout<<A[i]<<" ";
	}

	for(i=0;i<n2;i++){
		for(j=i+1;j<n2;j++){
		    if(B[j]<B[i]){
		        temp = B[i];
		    	B[i] = B[j];
			    B[j] = temp;

		    }
		}
	}
	cout<<endl;
	cout<<"Enter the elements of B: "<<endl;
	for(i=0;i<n2;i++){
		cout<<B[i]<<" ";
	}
	
	for(i=0;i<n1;i++){
		C.push_back(A[i]);
	}
	
	
	for(i=0;i<n2;i++){
		 C.push_back(B[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
		    if(C[j]<C[i]){
		        temp = C[i];
			    C[i] = C[j];
			    C[j] = temp;
		    }
		}
	}
	cout<<endl;
	cout<<"Enter the elements of C: "<<endl;
	for(i=0;i<n;i++){
		cout<<C[i]<<" ";
	}
	cout<<endl;
	int flag=-1;
	int indx;
	cout<<"Enter the element to be found: "<<endl;
	cin>>ele;
	for(i=0;i<n1;i++){
		if(ele==A[i]){
			flag =0;
			indx = i;
			break;
		}
	}
	
	for(i=0;i<n2;i++){
		if(ele==B[i]){
			flag =1;
			indx = i;
			break;
		}
	}
	if(flag==0){
		cout<<"Element Present in A"<<endl;
		cout<<"Index position in A: "<<indx<<endl;
	}
	else if(flag==1){
		cout<<"Element Present in B"<<endl;
		cout<<"Index position in B: "<<indx<<endl;
	}
	else{
		cout<<"Element not found"<<endl;
	}
	int indxc,f1=0;
	if(flag==0 || flag==1){
		for(i=0;i<n;i++){
			if(ele==C[i]){
				indxc = i;
				f1=1;
			}
		}
	}
	if(f1==1){
		cout<<"Index position in C: "<<indxc<<endl;
	}
	return 0;
}
