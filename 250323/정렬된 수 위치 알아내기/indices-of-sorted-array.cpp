#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
int sequence[1000];

int main() {
    cin >> N;
    vector<pair<int, int>> indexed_sequence(N);

    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
        indexed_sequence[i] = {sequence[i], i + 1};  // (원소, 원래 위치)
    }

    // 오름차순으로 정렬 (첫 번째 원소를 기준으로 정렬)
    sort(indexed_sequence.begin(), indexed_sequence.end());

    // 정렬된 순서에 맞게 원래 위치를 출력
    for (int i = 0; i < N; i++) {
        cout << indexed_sequence[i].second << " ";
    }

    return 0;
}
