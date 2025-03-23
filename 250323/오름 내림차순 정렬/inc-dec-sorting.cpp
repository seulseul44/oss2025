#include <iostream>
#include <algorithm>  // sort 함수 사용을 위한 라이브러리
using namespace std;

int n;
int nums[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // 오름차순 정렬
    sort(nums, nums + n);
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";

    // 내림차순 정렬
    sort(nums, nums + n, greater<int>());
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";

    return 0;
}
