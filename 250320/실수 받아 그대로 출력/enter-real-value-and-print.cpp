#include <iostream>
#include <iomanip>  // setprecision, fixed 사용을 위한 헤더
using namespace std;

int main() {
    float N = 0;

    cin >> N;
    cout << fixed << setprecision(2) << N;  // 소수점 두 자리까지 출력

    return 0;
}
