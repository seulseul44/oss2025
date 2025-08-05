#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        // i번째 줄의 별 개수 = 2*i + 1
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << "\n"; // 줄 바꿈
    }

    return 0;
}
