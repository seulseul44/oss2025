#include <iostream>
using namespace std;

int main() {
    int a=2;
    int b=5;
    int temp=0;

    temp=a;
    a=b;
    b=temp;

    cout<<a<<"\n"<<b;
    return 0;
}