#include <bits/stdc++.h>
using namespace std;

void maxqueue(queue<int> q) {
    int m = 0;
    for(int i=0; i<q.size(); i++) {
        if(q.front() > m) {
            m = q.front();
        }
        q.pop();
    }
    cout << "Maximum is: " << m << endl;
}

void sumeven(queue<int> q) {
    int x, s=0;
    for(int i=0; i<q.size(); i++) {
        x = q.front();
        if(x%2==0) {
            s = s + x;
        }
        q.pop();
    }
    cout << "Sum of even numbers is: " << s << endl;
}

queue<int> replaceodd(queue<int> q) {
    int x;
    for(int i=0; i<q.size(); i++) {
        x = q.front();
        if(x%2==1) {
            q.push(-1);
        } else {
            q.push(x);
        }
        q.pop();
    }
    return q;
}

void displayqueue(queue<int> q) {
    int n = q.size();
    for(int i=0; i<n; i++) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        q.push(x);
    }
    maxqueue(q);
    sumeven(q);
    q = replaceodd(q);
    displayqueue(q);
    return 0;
}
