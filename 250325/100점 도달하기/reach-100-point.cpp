#include <iostream>
using namespace std;

int main() {
    int N = 0;
    cin >> N;

    while (N <= 100) {
        if (N >= 90) {
            cout << "A";
        } 
        else if (N >= 80) {
            cout << "B";
        } 
        else if (N >= 70) {
            cout << "C";
        } 
        else if (N >= 60) {
            cout << "D";
        } 
        else {
            cout << "F";
        }
        cout<<" ";
        N++; 
    }

    return 0;
}
