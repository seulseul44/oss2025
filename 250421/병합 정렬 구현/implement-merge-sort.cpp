#include <iostream>
using namespace std;

int n;
int arr[100000];
int temp[100000]; // 임시 배열

void merge(int left, int mid, int right) {
    int i = left;     // 왼쪽 배열 시작
    int j = mid + 1;  // 오른쪽 배열 시작
    int k = left;     // 임시 배열 인덱스

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (int i = left; i <= right; i++) {
        arr[i] = temp[i];
    }
}

void merge_sort(int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        merge_sort(left, mid);
        merge_sort(mid + 1, right);
        merge(left, mid, right);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
