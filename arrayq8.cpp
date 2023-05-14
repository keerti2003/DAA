
#include <iostream>
#include<vector>
using namespace std; 
int main()
{
    vector<int>vec;
    int n,s,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        vec.push_back(s);
    }
    cin>>k;
    int sum;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            if(vec[i]!=vec[j]){
                sum = vec[i]+vec[j];
                if(sum==k){
                    cout<<"Yes"<<endl;
                    break;
                }
                else{
                    cout<<"No";
                }
            }
        }
    }
    return 0;
}


