#include <iostream>
#include <string>

using namespace std;

int main() {
    string words[5] = {"apple", "banana" , "grape", "blueberry", "orange"};
    char ch;
    int count = 0;

   
    cin >> ch;

    
    for (int i = 0; i < 5; i++) {
        if (words[i].length() >= 3 && (words[i][2] == ch || (words[i].length() > 3 && words[i][3] == ch))) {
            cout << words[i] << endl;
            count++;
        }
    }

    cout<< count << endl;
    return 0;
}

