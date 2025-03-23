#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    
    cin >> A >> B >> C;

    if (A >= B) {
        if (A <= C) {
            cout << A;  // A가 B보다 크거나 같고, C보다 작으면 A가 중앙값
        } else if (B >= C) {
            cout << B;  // A가 C보다 크고, B가 C보다 크거나 같으면 B가 중앙값
        } else {
            cout << C;  // 나머지 경우는 C가 중앙값
        }
    } else {  // B > A
        if (B <= C) {
            cout << B;  // B가 C보다 작거나 같으면 B가 중앙값
        } else if (A >= C) {
            cout << A;  // B가 C보다 크고, A가 C보다 크거나 같으면 A가 중앙값
        } else {
            cout << C;  // 나머지 경우는 C가 중앙값
        }
    }

    return 0;
}
