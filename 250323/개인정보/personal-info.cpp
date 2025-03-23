#include <iostream>
#include <algorithm>

using namespace std;

string name[5];
int height[5];
double weight[5];

struct Person {
    string name;
    int height;
    double weight;
};

bool compareByName(const Person &a, const Person &b) {
    return a.name < b.name;
}

bool compareByHeight(const Person &a, const Person &b) {
    return a.height > b.height;
}

int main() {
    Person people[5];

    for (int i = 0; i < 5; i++) {
        cin >> people[i].name >> people[i].height >> people[i].weight;
    }

    cout << "name" << endl;
    sort(people, people + 5, compareByName);
    for (int i = 0; i < 5; i++) {
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << endl;
    }

    cout << "height" << endl;
    sort(people, people + 5, compareByHeight);
    for (int i = 0; i < 5; i++) {
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << endl;
    }

    return 0;
}
