#include <iostream>
#include <string>
#include <algorithm> // sort 함수 사용을 위한 라이브러리

using namespace std;

int n;
string word[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> word[i];
    }

    // 문자열 배열 정렬 (사전순 정렬)
    sort(word, word + n);

    // 정렬된 문자열 출력
    for (int i = 0; i < n; i++) {
        cout << word[i] << endl;
    }

    return 0;
}
