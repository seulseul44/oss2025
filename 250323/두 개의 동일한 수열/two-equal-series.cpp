#include <iostream>
#include <algorithm>

using namespace std;

int n;
int A[100], B[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    sort(A, A + n);
    sort(B, B + n);

    bool isSame = true;
    for (int i = 0; i < n; i++) {
        if (A[i] != B[i]) {
            isSame = false;
            break;
        }
    }

    cout << (isSame ? "Yes" : "No");

    return 0;
}
