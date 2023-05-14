#include <bits/stdc++.h>
using namespace std;

class Stack {
    public:
	queue<int> q1, q2;
        void push(int x) {
            q2.push(x);
            while (!q1.empty()) {
                q2.push(q1.front());
                q1.pop();
            }
            queue<int> q = q1;
            q1 = q2;
            q2 = q;
        }
        void pop() {
            if (q1.empty())
                return;
            q1.pop();
        }
        int top() {
            if (q1.empty())
                return -1;
            return q1.front();
        }
        int size() {
            return q1.size();
        }
};

int main() {
	Stack s;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        s.push(x);
    }
	cout << "current size: " << s.size() << endl;
    for(int i=0; i<n; i++) {
        cout << s.top();
        s.pop();
    }
	cout << "current size: " << s.size() << endl;
	return 0;
}
