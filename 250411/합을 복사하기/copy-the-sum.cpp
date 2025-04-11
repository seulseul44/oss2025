#include <iostream>
using namespace std;

int main() {
    int a=1;
    int b=2;
    int c=3;

    int sum=0;
    sum=a+b+c;
    a=sum;
    c=sum;
    c=sum;

    cout<<a<<" "<<b<<" "<<c;
    return 0;
}