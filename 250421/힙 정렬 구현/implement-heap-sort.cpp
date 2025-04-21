#include <iostream>
using namespace std;

int n;
int arr[100001];

void heapify(int i, int size) {
    int largest = i;
    int left = i * 2;
    int right = i * 2 + 1;

    if (left <= size && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right <= size && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(largest, size);
    }
}

void heap_sort() {
    // Build max heap
    for (int i = n / 2; i >= 1; i--) {
        heapify(i, n);
    }

    // Sort
    for (int i = n; i >= 2; i--) {
        swap(arr[1], arr[i]);   // Move max to the end
        heapify(1, i - 1);      // Restore heap property
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    heap_sort();

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

