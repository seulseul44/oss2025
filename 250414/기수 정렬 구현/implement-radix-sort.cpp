#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
int arr[100000];

int getMax(int arr[], int n) {
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void radixSort(int arr[], int n) {
    int maxNum = getMax(arr, n);
    int exp = 1;

    while (maxNum / exp > 0) {
        vector<queue<int>> bucket(10);

        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / exp) % 10;
            bucket[digit].push(arr[i]);
        }

        int idx = 0;
        for (int i = 0; i < 10; i++) {
            while (!bucket[i].empty()) {
                arr[idx++] = bucket[i].front();
                bucket[i].pop();
            }
        }

        exp *= 10;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    radixSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
