#include <iostream>
#include <vector>
using namespace std;

vector<int> flm(const vector<int>& vec) {
    vector<int> max;
    for (int i = 1; i < vec.size() - 1; i++) {
        if (vec[i] > vec[i-1] && vec[i] > vec[i+1]) {
            max.push_back(vec[i]);
        }
    }
    return max;
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
    vector<int> max = flm(vec);
    cout << "Local maximas: ";
    for (int i : max) {
        cout << i << " ";
    }
    return 0;
}

