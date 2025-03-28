#include <iostream>
using namespace std;

int main() {
    int A,B=0;
    cin>>A>>B;

    for(int i=0;i<A;i++){
        for(int j=0;j<B;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}