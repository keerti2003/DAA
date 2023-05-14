#include <iostream>
#include <queue>
using namespace std;

queue<int> filtereven(queue<int> q, queue<int> q1) {
    int n = q.size();
    int x;
    for(int i=0; i<n; i++) {
        x = q.front();
        if(x % 2 == 0) {
            q1.push(x);
        }
        q.pop();
    }
    return q1;
}

queue<int> filterodd(queue<int> q, queue<int> q2) {
    int n = q.size();
    int x;
    for(int i=0; i<n; i++) {
        x = q.front();
        if(x % 2 == 1) {
            q2.push(x);
        }
        q.pop();
    }
    return q2;
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
    queue<int> Q;
    queue<int> Q1;
    queue<int> Q2;
    int n, x;
    cout << "Enter queue size :";
    cin >> n;
    cout << "Enter elements :";
    for(int i=0; i<n; i++) {
        cin >> x;
        Q.push(x);
    }
    Q1 = filtereven(Q, Q1);
    cout << "Q1 elements are: ";
    displayqueue(Q1);
    Q2 = filterodd(Q, Q2);
    cout << "Q2 elements are: ";
    displayqueue(Q2);
    return 0;
}
