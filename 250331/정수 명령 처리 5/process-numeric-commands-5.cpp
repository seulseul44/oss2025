#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr;

    for (int i = 0; i < N; i++) {
        string command;
        cin >> command;

        if (command == "push_back") {
            int x;
            cin >> x;
            arr.push_back(x);  
        } 
        else if (command == "pop_back") {
            if (!arr.empty()) {
                arr.pop_back();  
            }
        } 
        else if (command == "size") {
            cout << arr.size() << "\n";  
        } 
        else if (command == "get") {
            int k;
            cin >> k;
            if (k > 0 && k <= arr.size()) { // **k번째 값이므로 1-based index 고려**
                cout << arr[k - 1] << "\n";  
            }
        }
    }

    return 0;
}

