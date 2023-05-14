#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    stack<int>stk1;
    vector<int>vec;
    stack<int>stk2;
    stack<int>stk3;
    int n1,i;
    cout<<"Enter the number of elements in each stack"<<endl;
    cin>>n1;
    int arr[n1];
    //int n1 = n/2,arr[n];
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n1;i++){
        int s;
        cin>>s;
        stk1.push(s);
    }
    for(i=0;i<n1;i++){
        int s;
        cin>>s;
        stk2.push(s);
    }
    int t1,t2;
    while(!stk2.empty()){
        t1 = stk2.top();
        if(t1%2==0){
            vec.push_back(t1);
            stk2.pop();
        }
        else{
            stk3.push(t1);
            stk2.pop();
        }
        
    }
    while(!stk1.empty()){
        t2 = stk1.top();
        if(t2%2==0){
            vec.push_back(t2);
            stk1.pop();
        }
        else{
            stk3.push(t2);
            stk1.pop();
        }
    }
    
    for(i=0;i<=vec.size();i++){
        stk2.push(vec[i]);
    }
    int t3;
    if(stk3.size()>stk2.size()){
        t3 = stk3.top();
        stk1.push(t3);
        stk3.pop();
    }
    else if(stk3.size()<stk2.size()){
        stk2.pop();
    }
    
    cout<<"Odd stack elements"<<endl;
    while(!stk3.empty()){
        cout<<stk3.top()<<" ";
        stk3.pop();
    }
    cout<<endl;
    cout<<"Even stack elements"<<endl;
    while(!stk2.empty()){
        cout<<stk2.top()<<" ";
        stk2.pop();
    }
    cout<<endl;
    cout<<"Other stack elements"<<endl;
    while(!stk1.empty()){
        cout<<stk1.top()<<" ";
        stk1.pop();
    }
    if(stk1.empty()){
        cout<<"No elements found"<<endl;
    }
    return 0;
}
