#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_PLAYERS = 7; 

int main() {
    queue<int> players;  
    srand(time(NULL));   
    for (int i = 1; i <= NUM_PLAYERS; i++) {
        players.push(i);
    }

    while (players.size() > 1) {
        cout << "Passing the buck..." << endl;
        int count = rand() % players.size(); 

        for (int i = 0; i < count; i++) {
            int player = players.front();
            players.pop();
            players.push(player);
        }

        int eliminated = players.front();
        players.pop();
        cout << "Player " << eliminated << " is eliminated." << endl;
    }

    cout << "Player " << players.front() << " wins!" << endl;

    return 0;
}

