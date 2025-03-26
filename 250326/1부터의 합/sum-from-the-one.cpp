#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int sum = 0;
    int lastNumber = 0;

    for (int i = 1; ; i++) {  
        sum += i;
        if (sum > N) {  
            break;  // N을 초과하면 즉시 종료
        }
        lastNumber = i;  // 마지막으로 더한 숫자 저장
    }

    cout << lastNumber << endl;  // 개행 추가
    return 0;
}


