#include <iostream>
using namespace std;

int main() {
    int N=0;
    cin>>N;
    int A[N];

    for(int i=0;i<N;i++){
        cin>>A[i];
        cout<<(A[i]*A[i])<<" ";
    }
    
    return 0;
}