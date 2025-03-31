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
            arr.push_back(x);  // 맨 뒤에 추가
        } 
        else if (command == "pop_back") {
            if (!arr.empty()) {
                arr.pop_back();  // 맨 뒤 삭제
            }
        } 
        else if (command == "size") {
            cout << arr.size() << "\n";  // 배열 크기 출력
        } 
        else if (command == "get") {
            int k;
            cin >> k;
            cout << arr[k] << "\n";  // k번째 원소 출력
        }
    }

    return 0;
}
