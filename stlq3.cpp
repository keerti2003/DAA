#include <iostream>
#include <stack>
using namespace std;

stack<int> filtereven(stack<int> s, stack<int> s1) {
    int n = s.size();
    int x;
    for(int i=0; i<n; i++) {
        x = s.top();
        if(x % 2 == 0) {
            s1.push(x);
        }
        s.pop();
    }
    return s1;
}

stack<int> filterodd(stack<int> s, stack<int> s2) {
    int n = s.size();
    int x;
    for(int i=0; i<n; i++) {
        x = s.top();
        if(x % 2 == 1) {
            s2.push(x);
        }
        s.pop();
    }
    return s2;
}

void displaystack(stack<int> s) {
    int n = s.size();
    for(int i=0; i<n; i++) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> S;
    stack<int> S1;
    stack<int> S2;
    int n, x;
    cout << "Enter stack size :";
    cin >> n;
    cout << "Enter elements :";
    for(int i=0; i<n; i++) {
        cin >> x;
        S.push(x);
    }
    displaystack(S);
    S1 = filtereven(S, S1);
    S2 = filterodd(S, S2);
    cout << "S1 elements are: ";
    displaystack(S1);
    cout << "S2 elements are: ";
    displaystack(S2);
    return 0;
}
