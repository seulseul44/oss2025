#include <iostream>
using namespace std;

int main() {
    int A,B,C;
    cin>>A>>B>>C;

    if(B>A&&B<C){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}