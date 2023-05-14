#include <bits/stdc++.h>
using namespace std;

class Queue {
    public:
	stack<int> s1, s2;
	void enQueue(int x) {
		while (!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(x);
		while (!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}
	int deQueue() {
		if (s1.empty()) {
			cout << "Q is Empty";
			exit(0);
		}
		int x = s1.top();
		s1.pop();
		return x;
	}
};

int main() {
	Queue q;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        q.enQueue(x);
    }
    for(int i=0; i<n; i++) {
        cout << q.deQueue();
    }
	return 0;
}
