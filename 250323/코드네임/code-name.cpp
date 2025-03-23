#include <iostream>

#define MAX_N 5

using namespace std;

struct Agent {
    char codename;
    int score;
};

int main() {
    Agent agents[MAX_N];

    for (int i = 0; i < MAX_N; i++) {
        cin >> agents[i].codename >> agents[i].score;
    }

    int min_score = agents[0].score;
    int min_index = 0;

    for (int i = 1; i < MAX_N; i++) {
        if (agents[i].score < min_score) {
            min_score = agents[i].score;
            min_index = i;
        }
    }

    cout << agents[min_index].codename << " " << agents[min_index].score << endl;

    return 0;
}
