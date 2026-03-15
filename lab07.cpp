//680615028
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;

    cout << "Enter N: ";
    cin >> N;
    cout << "Enter M: ";
    cin >> M;

    vector<int> players;
    for (int i = 1; i <= N; ++i) {
        players.push_back(i);
    }

    cout << "The sequence of elimination is: ";

    int current_pos = 0;

    while (players.size() > 1) {

        current_pos = (current_pos + M) % players.size();

        cout << players[current_pos];
        
        players.erase(players.begin() + current_pos);

        if (players.size() > 1) {
            cout << ", ";
        } else {
            cout << " and then ";
        }
    }

    cout << "#" << players[0] << " winning." << endl;

    return 0;
}