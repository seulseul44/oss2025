#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i * 2; j++) { // 2씩 증가하도록 수정
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
