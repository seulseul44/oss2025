#include <iostream>
using namespace std;

int main() {
    int A,B=0;
    int i=0;

    cin>>A>>B;

    for(i=B;i>=A;i--){
        cout<<i<<" ";
    }
    return 0;
}