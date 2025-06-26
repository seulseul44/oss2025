#include <iostream>
using namespace std;

int main() {
    int A,N;
    cin>>A>>N;

    int i=0;
    while(i<N){
        A+=N;
        i++;
        cout<<A<<"\n";
    }
    return 0;
}