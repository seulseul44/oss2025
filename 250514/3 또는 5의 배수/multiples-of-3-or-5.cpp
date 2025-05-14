#include <iostream>
using namespace std;

int main() {
    int A;
    cin>>A;

    if(A%3==0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

    if(A%5==0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO";
    }

    return 0;
}