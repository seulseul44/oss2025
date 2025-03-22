#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    cout << (A >= B) << "\n";  // A가 B보다 같거나 큰가?
    cout << (A > B) << "\n";   // A가 B보다 큰가?
    cout << (B >= A) << "\n";  // B가 A보다 같거나 큰가?
    cout << (B > A) << "\n";   // B가 A보다 큰가?
    cout << (A == B) << "\n";  // A와 B가 같은가?
    cout << (A != B) << "\n";  // A와 B가 다른가?

    return 0;
}
