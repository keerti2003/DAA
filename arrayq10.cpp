#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, k, i=0, c=0;
    cin >> k;
    cin >> d;
    int a[10];
    int k1 = k;
    while(k1>0) {
        int rem = k1%10;
        if(rem == d) {
            a[c] = i;
            c++;
        }
        i++;
        k1 = k1/10;
    }
    if(c>0) {
        cout << d << " occurs in " << k << endl;
        cout << d << " occurs " << c << " times" << endl;
        cout << d << " occurs at ";
        for(i=0; i<c; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
