#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 9) {
        cout << "1 이상 9 이하의 수를 입력하세요.";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // 홀수 줄 (0,2,4...) → 오름차순
            for (int j = 1; j <= n; j++) {
                cout << j;
            }
        } else {
            // 짝수 줄 (1,3...) → 내림차순
            for (int j = n; j >= 1; j--) {
                cout << j;
            }
        }
        cout << "\n";
    }

    return 0;
}
