#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B;
    cin>>A>>B;

    if(A>=90){
        if (B>=95){
            cout<<100000;
        }
        else if(B>=90){
            cout<<50000;

        }
        else{
            cout<<0;
        }
    }
    else{
        cout<<0;
    }
    return 0;
}