#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin>>A>>B;
    int i=0;
    i=A;
    while( i<=B){
        
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
}