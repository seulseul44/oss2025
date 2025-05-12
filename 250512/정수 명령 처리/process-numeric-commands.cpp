#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    stack<int> s;
    string cmd;

    for (int i = 0; i < N; i++) {
        cin >> cmd;

        if (cmd == "push") {
            int num;
            cin >> num;
            s.push(num);
        } else if (cmd == "pop") {
            if (s.empty()) {
                cout << -1 << '\n';
            } else {
                cout << s.top() << '\n';
                s.pop();
            }
        } else if (cmd == "size") {
            cout << s.size() << '\n';
        } else if (cmd == "empty") {
            cout << (s.empty() ? 1 : 0) << '\n';
        } else if (cmd == "top") {
            if (s.empty()) {
                cout << -1 << '\n';
            } else {
                cout << s.top() << '\n';
            }
        }
    }

    return 0;
}
