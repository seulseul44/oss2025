#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 10

using namespace std;

struct Person {
    string name;
    string street_address;
    string region;
};

int main() {
    int n;
    cin >> n;

    Person people[MAX_N];

    for (int i = 0; i < n; i++) {
        cin >> people[i].name >> people[i].street_address >> people[i].region;
    }

    // Sort the array of people based on their name in lexicographical order
    sort(people, people + n, [](const Person &a, const Person &b) {
        return a.name > b.name;  // Sorting in descending order
    });

    // Output the last person in the sorted list, which is the one with the lexicographically largest name
    cout << "name " << people[0].name << endl;
    cout << "addr " << people[0].street_address << endl;
    cout << "city " << people[0].region << endl;

    return 0;
}
