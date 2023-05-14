#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vd;
int findmax(int a,int b,int c,int i,int j,int mid){
	if(a>b && a>c){
		return a;
	}
	else if(b>a && b>c){
		return b;
	}
	else{
		return c;
	}
}

int maxsumrec(const vector<int> &vec, int l,int r){
	if(l==r){ //ONE ELEMENT
		if(vec[l]>0){
			return vec[l];
		}
		else{
			return 0;
		}
	}
	int mid = (l+r)/2;
	maxsumrec(vec,l,mid);
	maxsumrec(vec,mid+1,r);
	
	vector<int> displayleft;
	vector<int> displayright;
	
	int leftindx=mid,rightindx=mid+1;
	int maxsumleft = 0,sumleft = 0;
	for(int i=mid;i>=l;i--){
		sumleft += vec[i];
		if(sumleft>maxsumleft){
			maxsumleft = sumleft;
			displayleft.push_back(vec[i]);
			leftindx--;
		}
	}
	int maxsumright = 0,sumright = 0;
	for(int i=mid+1;i<=r;i++){
		sumright += vec[i];
		if(sumright>maxsumright){
			maxsumright = sumright;
			displayright.push_back(vec[i]);
			rightindx++;
		}
	}
	int k;
	k = findmax(maxsumleft,maxsumright,maxsumright+maxsumleft,leftindx,rightindx,mid);
	for(int i=0;i<displayleft.size();i++){
	    cout<<displayleft[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<displayright.size();i++){
	    cout<<displayright[i]<<" ";
	}
	cout<<endl;
	return k;
}

int main(){
	int n = 8;
	vector<int> vec { 4, -3, 5, -2, -1, 2, 6, -2 };
	for(int i=0;i<displayleft.size();i++){
	    cout<<displayleft[i];
	}
	cout<<endl;
	for(int i=0;i<displayright.size();i++){
	    cout<<displayright[i];
	}
	cout<<endl;
	int final = maxsumrec(vec,0,n-1);
	cout<<final;
}
