#include <iostream>
using namespace std;

int main() {
    int N,x=0;

    cin>>N;

    if (N>=80){
        cout<<"pass";
    }
    else {
        x=80-N;
        cout<<x<<" more score";
    }
    return 0;
}