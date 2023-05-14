#include <iostream>
#include<vector>
using namespace std; int main()
{
    vector<int>vec;
    int n,s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        vec.push_back(s);
    }
    for(int i=1;i<vec.size()-1;i++){
        if(vec[i+1]%2==0&& vec[i]%2==0){
            cout<<vec[i];
            break;
        }
    }
    return 0;
}
