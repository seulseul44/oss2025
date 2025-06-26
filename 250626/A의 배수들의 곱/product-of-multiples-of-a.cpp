#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin>>A>>B;

    int mul=1;

    for(int i=1; i<=B;i++){
        if(i%A==0){
            mul*=i;
        }
    }
    cout<<mul;
    return 0;
}