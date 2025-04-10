#include <iostream>
#include <iomanip>  // 이거 추가!
using namespace std;

int main() {
    int a = 13;
    float b = 0.165;

    cout << fixed << setprecision(6);  // 소수점 6자리까지 고정
    cout << a << " * " << b << " = " << (float)a * b;
    return 0;
}
