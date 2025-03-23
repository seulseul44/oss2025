#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

struct Student {
    int height;
    int weight;
    int index; // 입력 순서대로 번호를 기록
};

bool compare(const Student &a, const Student &b) {
    // 키가 작은 학생을 먼저
    if (a.height != b.height) {
        return a.height < b.height;
    }
    // 키가 같으면 몸무게 큰 학생을 먼저
    return a.weight > b.weight;
}

int main() {
    cin >> N;
    vector<Student> students(N);

    // 학생 정보 입력
    for (int i = 0; i < N; i++) {
        cin >> students[i].height >> students[i].weight;
        students[i].index = i + 1; // 입력 순서대로 번호 부여
    }

    // 정렬
    sort(students.begin(), students.end(), compare);

    // 정렬된 학생 출력
    for (int i = 0; i < N; i++) {
        cout << students[i].height << " " << students[i].weight << " " << students[i].index << endl;
    }

    return 0;
}
