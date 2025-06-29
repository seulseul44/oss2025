#include <iostream>
#include <iomanip>  // setprecision을 위해 필요
using namespace std;

int main() {
    int sum = 0;         // 나이의 합
    int cnt = 0;         // 입력된 사람 수
    int age;

    while (true) {
        cin >> age;

        if (age >= 20 && age < 30) {
            sum += age;
            cnt++;
        } else {
            break;  // 20대가 아닌 나이가 나오면 종료
        }
    }

    if (cnt > 0) {
        // 소수점 둘째 자리까지 고정 출력
        cout << fixed << setprecision(2) << (float)sum / cnt;
    } else {
        cout << "0.00";  // 예외 처리: 입력된 20대가 하나도 없는 경우
    }

    return 0;
}
