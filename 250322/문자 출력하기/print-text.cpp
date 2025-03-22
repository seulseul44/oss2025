#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;  // `>>`를 사용하여 입력받기

    for(int i = 0; i < 8; i++) {  // 반복문 수정
        cout << ch;
    }

    return 0;
}
