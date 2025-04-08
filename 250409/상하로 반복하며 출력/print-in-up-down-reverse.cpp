#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[9][9]; // 최대 n은 9니까 여유 있게 설정

    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            // 짝수 번째 열은 위에서 아래로
            for (int i = 0; i < n; i++) {
                arr[i][j] = i + 1;
            }
        } else {
            // 홀수 번째 열은 아래에서 위로
            for (int i = 0; i < n; i++) {
                arr[i][j] = n - i;
            }
        }
    }

    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}
