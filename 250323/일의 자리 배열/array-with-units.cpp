#include <iostream>
using namespace std;

int main() {
    int arr[10];  // 10개의 항을 저장할 배열
    cin >> arr[0] >> arr[1];  // 첫 번째와 두 번째 항 입력

    // 세 번째 항부터 계산
    for (int i = 2; i < 10; i++) {
        arr[i] = (arr[i - 2] + arr[i - 1]) % 10;  // 1의 자리만 저장
    }

    // 결과 출력
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
