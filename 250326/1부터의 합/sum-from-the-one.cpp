#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int sum = 0;
    int lastNumber = 0;

    for (int i = 1; ; i++) {  // i를 1부터 시작 (0에서 시작하면 의미 없음)
        sum += i;  // i를 더하기
        if (sum > N) {  
            lastNumber = i;  // 마지막으로 더한 수 저장
            break;  // 합이 N보다 커지면 종료
        }
    }

    cout << lastNumber << endl;  // 마지막으로 더한 숫자 출력
    return 0;
}

