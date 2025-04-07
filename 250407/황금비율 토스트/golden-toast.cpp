#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    int n, m;
    string s;
    cin >> s >> m;

    list<char> editor(s.begin(), s.end());
    auto cursor = editor.end(); // 커서는 맨 뒤에 있음

    for (int i = 0; i < m; ++i) {
        char command;
        cin >> command;

        if (command == 'L') {
            if (cursor != editor.begin()) cursor--;
        } else if (command == 'D') {
            if (cursor != editor.end()) cursor++;
        } else if (command == 'B') {
            if (cursor != editor.begin()) {
                cursor = editor.erase(--cursor);
            }
        } else if (command == 'P') {
            char c;
            cin >> c;
            editor.insert(cursor, c);
        }
    }

    for (char ch : editor) cout << ch;
    cout << '\n';

    return 0;
}
