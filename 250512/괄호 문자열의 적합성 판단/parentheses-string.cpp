#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    stack<char> s;

    for (char c : str) {
        if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            if (s.empty()) {
                cout << "No" << endl;
                return 0;
            }
            s.pop();
        }
    }

    if (s.empty()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
