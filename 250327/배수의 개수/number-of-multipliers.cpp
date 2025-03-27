#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int cnt_3 = 0, cnt_5 = 0;  // 변수 초기화 필수!

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 3 == 0) {
            cnt_3++;  // 3의 배수 카운트
        }
        if (arr[i] % 5 == 0) {
            cnt_5++;  // 5의 배수 카운트 (공배수도 포함됨)
        }
    }

    cout << cnt_3 << " " << cnt_5;
    return 0;
}
