#include<iostream>
#include<stack>
using namespace std;

stack<int> sortStack(stack<int> &stk)
{
    stack<int> tmpStk;
    while (!stk.empty())
    {
        int t = stk.top();
        stk.pop(); 
        while (!tmpStk.empty() && tmpStk.top() > t)
        {
            stk.push(tmpStk.top());
            tmpStk.pop();
        }
        tmpStk.push(t);
    }
 
    return tmpStk;
}
 

int main()
{
    int n;
    stack<int> stk;
    cout<<"Enter the no. of elements"<<endl;
    cin>>n;
    int i;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++){
        int s;
        cin>>s;
        stk.push(s);
    }
    
    stack<int> tmpStk = sortStack(stk);
    cout << "Sorted numbers are "<<endl;
 
    while (!tmpStk.empty())
    {
        cout << tmpStk.top()<< " ";
        tmpStk.pop();
    }
    return 0;
}
