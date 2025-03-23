#include <iostream>
using namespace std;

int main() {
    int Y = 0;

    cin >> Y;

    if (Y % 4 == 0) {
        if (Y % 100 == 0 && Y % 400 != 0) {
            cout << "false";
        } else {
            cout << "true";
        }
    } else {
        cout << "false";  // 4의 배수가 아닌 경우도 false 출력
    }

    return 0;
}
