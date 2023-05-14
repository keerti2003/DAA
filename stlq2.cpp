#include <iostream>
#include <stack>
using namespace std;

void displaymul3(stack<int> s) {
    int n = s.size();
    int x;
    for(int i=0; i<n; i++) {
        x = s.top();
        if(x % 3 == 0) {
            cout << x << " ";
        }
        s.pop();
    }
}

int main() {
    stack<int> S;
    int n, x;
    cout << "Enter stack size :";
    cin >> n;
    cout << "Enter elements :";
    for(int i=0; i<n; i++) {
        cin >> x;
        S.push(x);
    }
    cout << "Elements divisible by 3 are : ";
    displaymul3(S);
    return 0;
}
