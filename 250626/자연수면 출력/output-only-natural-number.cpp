#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin>>A>>B;

    if(A>0){
        for(int i=0;i<B;i++){
            cout<<A;
        }

    }
    else{
        cout<<0;
    }
    return 0;
}