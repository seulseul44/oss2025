#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;

    if (M >= 3 && M <= 5)
        cout << "Spring" << endl;
    else if (M >= 6 && M <= 8)
        cout << "Summer" << endl;
    else if (M >= 9 && M <= 11)
        cout << "Fall" << endl;
    else // 12, 1, 2
        cout << "Winter" << endl;

    return 0;
}
