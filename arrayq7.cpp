#include <iostream>
#include <vector>
using namespace std;

void swap(int x, vector<int> &vec){
    int temp = vec[x];
    vec[x]=vec[0];
    vec[0]=temp;
}

void sort(vector<int>&vec){
    int n=vec.size();
    int min=0,p,mind;
    for(int i=0;i<n;i++){
        if(vec[i]<min){
            p = vec[i];
            mind = i;
        }
    }
    swap(mind,vec);
    swap(n-1,vec);
    for(int i=0;i<n;i++){
        int m=0,j;
        for(j=i+1;j<n;j++){
            if(vec[j]<m && vec[j]!=p){
                m = vec[j];
            }
        }
        swap(j,vec);
        swap(i,vec);
    }
}
int main() {
    vector<int> vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        vec.push_back(s);
    }
    sort(vec);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}

