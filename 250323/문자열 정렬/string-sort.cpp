#include <iostream>
#include <string>
#include <algorithm> // sort 함수 사용을 위한 라이브러리

using namespace std;

string str;

int main() {
    cin >> str;

    // 문자열 정렬 (알파벳 순서대로)
    sort(str.begin(), str.end());

    // 정렬된 문자열 출력
    cout << str << endl;

    return 0;
}
