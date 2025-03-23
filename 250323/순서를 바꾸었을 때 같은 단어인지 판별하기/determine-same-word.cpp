#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string word1;
string word2;

int main() {
    cin >> word1;
    cin >> word2;

    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    if (word1 == word2) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
