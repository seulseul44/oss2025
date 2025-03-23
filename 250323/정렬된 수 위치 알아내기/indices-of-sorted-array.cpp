#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int sequence[1000];

int main() {
    cin >> N;
    vector<pair<int, int>> indexed_sequence(N);

    // 원소와 그 원소의 원래 위치 저장
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
        indexed_sequence[i] = {sequence[i], i + 1};  // (값, 원래 인덱스)
    }

    // 값 기준으로 오름차순 정렬
    sort(indexed_sequence.begin(), indexed_sequence.end());

    // 원래 위치 출력
    for (int i = 0; i < N; i++) {
        cout << indexed_sequence[i].second << " ";  // 원래의 인덱스 출력
    }

    return 0;
}

