#include <iostream>
using namespace std;

int main() {
    int N=0;
    cin>>N;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    return 0;
}