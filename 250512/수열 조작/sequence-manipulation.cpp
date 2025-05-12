#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> q;
    for (int i = 1; i <= N; ++i)
        q.push(i);

    while (q.size() > 1) {
        q.pop();                 // 1. 맨 앞 제거
        q.push(q.front());      // 2. 그 다음을 맨 뒤로
        q.pop();                //    그리고 제거
    }

    cout << q.front() << endl;
    return 0;
}
