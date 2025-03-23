#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;

    vector<string> result;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < n; i++) {
        if (str[i].substr(0, t.length()) == t) {
            result.push_back(str[i]);
        }
    }

    sort(result.begin(), result.end());

    if (k <= result.size()) {
        cout << result[k - 1] << endl;
    } else {
        cout << "No such word" << endl; // K번째 단어가 없으면 출력
    }

    return 0;
}
