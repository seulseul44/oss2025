#include <iostream>
#include <string>

using namespace std;

class User {
public:
    string id;
    int level;

    User(string id_value, int level_value) : id(id_value), level(level_value) {}
};

int main() {
    string user2_id;
    int user2_level;
    cin >> user2_id >> user2_level;

    User user1("codetree", 10);  // First object with initialized values
    User user2(user2_id, user2_level);  // Second object with input values

    cout << "user " << user1.id << " lv " << user1.level << endl;
    cout << "user " << user2.id << " lv " << user2.level << endl;

    return 0;
}
