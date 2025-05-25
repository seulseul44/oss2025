#include <iostream>
using namespace std;

int main() {
    int A;
    cin>>A;

    if(A%3==0||A%5==0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}