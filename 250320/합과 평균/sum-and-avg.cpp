#include <iostream>
#include <iomanip>  // setprecision을 사용하기 위한 헤더
using namespace std;

int main() {
    int A, B = 0;

    cin >> A >> B;

    cout << A + B << " ";  // A+B 출력 후 공백 추가
    cout << fixed << setprecision(1) << (float)(A + B) / 2;  // 평균을 소수점 1자리까지 출력

    return 0;
}

