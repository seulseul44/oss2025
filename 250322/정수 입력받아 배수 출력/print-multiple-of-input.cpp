#include <iostream>
using namespace std;

int main() {
    int N=0;
    int i=0;

    cin>>N;
    for(i=N;i<=(N*5);i++){
        if (i%N==0){
            cout<<i<<" ";
        }
    }
    return 0;
}