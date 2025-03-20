#include <iostream>
using namespace std;

int main() {
    int a, b, c = 0;

    cin >> a >> b >> c;

    cout << a + b + c << "\n";  // 합 출력
    cout << (a + b + c) / 3 << "\n";  // 평균 출력 (정수 나눗셈)
    cout << (a + b + c) - ((a + b + c) / 3) << "\n";  // 나머지 출력

    return 0;
}
