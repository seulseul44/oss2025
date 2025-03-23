#include <iostream>
#include <algorithm>

using namespace std;

int n;
string name[10];
int score1[10];
int score2[10];
int score3[10];

struct Student {
    string name;
    int score1;
    int score2;
    int score3;
    int total;
};

int main() {
    cin >> n;
    Student students[10];

    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].score1 >> students[i].score2 >> students[i].score3;
        students[i].total = students[i].score1 + students[i].score2 + students[i].score3;
    }

    sort(students, students + n, [](const Student &a, const Student &b) {
        return a.total < b.total;
    });

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].score1 << " " << students[i].score2 << " " << students[i].score3 << endl;
    }

    return 0;
}
