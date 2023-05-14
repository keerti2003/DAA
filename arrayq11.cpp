#include <bits/stdc++.h>
using namespace std;

void dispdiagonals(vector<vector<int> > v) {
    int n = v.size();
    for(int i=0; i<n; i++) {
        cout << v[i][i];
    }
    for(int i=0; i<n; i++) {
        cout << v[i][n-i-1];
    }
}

int main() {
    int n, x;
    cin >> n;
    vector<vector<int> > v(n, vector<int> (n, 0));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> x;
            v[i][j] = x;
        }
    }
    dispdiagonals(v);
    return 0;
}
