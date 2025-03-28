#include <iostream>
using namespace std;

int main() {
    int A=0;
    cin>>A;

    while (A!=25){
        if (A<25){
            cout<<"Higher"<<"\n";
            cin>>A;
        }
        else if(A>25){
            cout<<"Lower"<<"\n";
            cin>>A;
        }
    }
    cout<<"Good";
    return 0;
}