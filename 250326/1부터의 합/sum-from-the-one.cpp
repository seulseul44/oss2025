#include <iostream>
using namespace std;

int main() {
    int N = 0;
    cin >> N;
    
    int sum = 0;
    int lastNumber = 0;  // 마지막으로 더한 숫자를 저장할 변수

    for (int i = 1; ; i++) {  // 무한 루프, 조건은 내부에서 처리
        if (sum > N) {
            break;  // 합이 N보다 커지면 반복문 종료
        }

        lastNumber = i;  // 마지막으로 더한 숫자 저장
        sum += i;  // 합 누적
    }

    cout << lastNumber;  // 마지막으로 더한 숫자 출력
    return 0;
}
