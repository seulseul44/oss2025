#include <iostream>
using namespace std;

int start, end;

int main() {
    cin >> start >> end;
    int count = 0;

    for (int i = start; i <= end; ++i) {
        int divisorCount = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) divisorCount++;
        }
        if (divisorCount == 3) count++;
    }

    cout << count << endl;
    return 0;
}
