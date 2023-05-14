#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;  // queue to store tokens
    int token = 0; // variable to keep track of tokens

    while (true) {
        int choice;
        cout << "1. Customer Arrival" << endl;
        cout << "2. Customer Departure" << endl;
        cout << "3. Check queue size" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1: // customer arrival
                token++;
                q.push(token);
                cout << "Token number: " << token << endl;
                break;
            case 2: // customer departure
                if (!q.empty()) {
                    cout << "Token number " << q.front() << " has been served." << endl;
                    q.pop();
                } else {
                    cout << "No customers in queue." << endl;
                }
                break;
            case 3: // check queue size
                cout << "Customers yet to be served: " << q.size() << endl;
                break;
            case 4: // exit
                exit(0);
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }
    return 0;
}

