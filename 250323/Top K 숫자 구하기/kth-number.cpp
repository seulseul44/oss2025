#include <iostream>
#include <algorithm> // sort 함수 사용을 위한 라이브러리

using namespace std;

int N, k;
int nums[1000];

int main() {
    cin >> N >> k;

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    // 배열 정렬 (오름차순)
    sort(nums, nums + N);

    // K번째 숫자 출력 (0-based index이므로 k-1 사용)
    cout << nums[k - 1] << endl;

    return 0;
}

