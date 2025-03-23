#include <iostream>
#include <string>

using namespace std;

struct Bomb {
    string unlock_code;
    char wire_color;
    int seconds;
};

int main() {
    Bomb bomb;

    cin >> bomb.unlock_code >> bomb.wire_color >> bomb.seconds;

    cout << "code : " << bomb.unlock_code << endl;
    cout << "color : " << bomb.wire_color << endl;
    cout << "second : " << bomb.seconds << endl;

    return 0;
}
