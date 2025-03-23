#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    // 두 힙을 사용하여 중앙값을 추적
    priority_queue<int> max_heap; // 최대 힙 (중앙값보다 작은 값들)
    priority_queue<int, vector<int>, greater<int>> min_heap; // 최소 힙 (중앙값보다 큰 값들)

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        // 새로운 값이 들어올 때, 두 힙에 적절히 분배
        if (max_heap.size() == 0 || arr[i] <= max_heap.top()) {
            max_heap.push(arr[i]); // 최대 힙에 넣기
        } else {
            min_heap.push(arr[i]); // 최소 힙에 넣기
        }

        // 힙의 크기 균형 맞추기
        if (max_heap.size() > min_heap.size() + 1) {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
        if (min_heap.size() > max_heap.size()) {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }

        // 홀수 번째 원소에 대해서 중앙값 출력
        if ((i + 1) % 2 == 1) {
            cout << max_heap.top() << endl; // 중앙값은 최대 힙의 top
        }
    }

    return 0;
}
