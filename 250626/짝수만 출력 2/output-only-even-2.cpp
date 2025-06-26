#include <iostream>
using namespace std;

int main() {
    int A,B;

    cin>>B>>A;

    int i=0;
    i=B;

    while(i>=A){
        cout<<i<<" ";
        i-=2;
    }
    return 0;
}