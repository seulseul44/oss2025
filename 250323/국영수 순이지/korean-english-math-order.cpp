#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

struct Student {
    string name;
    int korean;
    int english;
    int math;
};

int main() {
    cin >> n;
    Student students[10];

    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].korean >> students[i].english >> students[i].math;
    }

    // Sort students by Korean, English, and Math in descending order
    sort(students, students + n, [](const Student &a, const Student &b) {
        if (a.korean != b.korean) return a.korean > b.korean;
        if (a.english != b.english) return a.english > b.english;
        return a.math > b.math;
    });

    // Output the sorted student information
    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].korean << " " << students[i].english << " " << students[i].math << endl;
    }

    return 0;
}
