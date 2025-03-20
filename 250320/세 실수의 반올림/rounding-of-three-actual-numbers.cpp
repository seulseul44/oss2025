#include <iostream>
#include <iomanip>  // setprecision, fixed 사용을 위한 헤더
using namespace std;

int main() {
    float a, b, c = 0;

    cin >> a >> b >> c;

    // 소수점 3자리까지 반올림하고 각 값 뒤에 줄 바꿈
    cout << fixed << setprecision(3) << a << "\n" << b << "\n" << c << "\n";

    return 0;
}
