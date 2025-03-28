#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin>>A>>B;
    int num=A;

    while(num<=B){
        if (num%2!=0){
            cout<<num<<" ";
            num=2*num; 
        }
        else {
            cout<<num<<" ";
            num=num+3;
        }
    }
    return 0;
}