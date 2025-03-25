#include <iostream>
using namespace std;

int main() {
    string text;
    cin >> text;

    text[1] = 'a'; // 두 번째 글자 변경
    text[text.length() - 2] = 'a'; // 뒤에서 두 번째 글자 변경

    cout << text;
    return 0;
}
