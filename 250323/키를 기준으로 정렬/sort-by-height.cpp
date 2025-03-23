#include <iostream>
#include <algorithm>

using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

struct Person {
    string name;
    int height;
    int weight;
};

int main() {
    cin >> n;
    Person people[10];

    for (int i = 0; i < n; i++) {
        cin >> people[i].name >> people[i].height >> people[i].weight;
    }

    // Sort people by height in ascending order
    sort(people, people + n, [](const Person &a, const Person &b) {
        return a.height < b.height;
    });

    // Output the sorted people information
    for (int i = 0; i < n; i++) {
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << endl;
    }

    return 0;
}
