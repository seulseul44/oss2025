#include <iostream>
#include <algorithm>

using namespace std;

int N;
int h[1000];
int w[1000];

struct Student {
    int height;
    int weight;
    int number;
};

int main() {
    cin >> N;
    Student students[1000];

    for (int i = 0; i < N; i++) {
        cin >> students[i].height >> students[i].weight;
        students[i].number = i + 1;
    }

    sort(students, students + N, [](const Student &a, const Student &b) {
        if (a.height != b.height) return a.height > b.height;
        if (a.weight != b.weight) return a.weight > b.weight;
        return a.number < b.number;
    });

    for (int i = 0; i < N; i++) {
        cout << students[i].height << " " << students[i].weight << " " << students[i].number << endl;
    }

    return 0;
}
