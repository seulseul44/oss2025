#include <iostream>
using namespace std;

int main() {
    int a=5;
    int b=6;
    int c=7;

    int temp=0;

    temp=a;
    a=c;
    c=b;
    b=temp;
    cout<<a<<"\n"<<b<<"\n"<<c;
    

    return 0;
}