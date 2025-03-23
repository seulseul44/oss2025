#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int N;
int x[1000], y[1000];

struct Point {
    int x, y, index;
};

bool compare(const Point &a, const Point &b) {
    int distA = abs(a.x) + abs(a.y);  // 원점과의 맨해튼 거리
    int distB = abs(b.x) + abs(b.y);
    
    if (distA == distB) {
        return a.index < b.index;  // 거리가 같으면 번호가 작은 점을 먼저
    }
    return distA < distB;  // 맨해튼 거리가 작은 점을 먼저
}

int main() {
    cin >> N;

    Point points[1000];
    
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        points[i] = {x[i], y[i], i + 1};  // 점의 좌표와 번호 저장
    }

    sort(points, points + N, compare);  // 점들을 맨해튼 거리 기준으로 정렬

    for (int i = 0; i < N; i++) {
        cout << points[i].index << endl;  // 정렬된 순서대로 번호 출력
    }

    return 0;
}
