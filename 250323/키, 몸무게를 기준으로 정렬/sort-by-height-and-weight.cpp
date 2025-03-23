#include <iostream>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    int height;
    int weight;
};

bool compare(const Person &a, const Person &b) {
    if (a.height == b.height) {
        return a.weight > b.weight;  // 키가 같다면, 몸무게가 더 큰 사람이 먼저
    }
    return a.height < b.height;  // 키 기준으로 오름차순 정렬
}

int main() {
    int n;
    cin >> n;

    Person people[10];
    for (int i = 0; i < n; i++) {
        cin >> people[i].name >> people[i].height >> people[i].weight;
    }

    sort(people, people + n, compare);  // compare 함수를 기준으로 정렬

    for (int i = 0; i < n; i++) {
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << endl;
    }

    return 0;
}
