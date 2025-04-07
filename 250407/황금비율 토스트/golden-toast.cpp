#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    int n, m;
    string s;
    cin >> n >> m >> s;

    list<char> bread(s.begin(), s.end());
    auto cursor = bread.end();

    for (int i = 0; i < m; ++i) {
        char command;
        cin >> command;

        if (command == 'L') {
            if (cursor != bread.begin()) cursor--;
        } else if (command == 'R') {
            if (cursor != bread.end()) cursor++;
        } else if (command == 'D') {
            if (cursor != bread.end()) cursor = bread.erase(cursor);
        } else if (command == 'P') {
            char c;
            cin >> c;
            bread.insert(cursor, c);
        }
    }

    for (char c : bread) cout << c;
    cout << endl;
    return 0;
}
