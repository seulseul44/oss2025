#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int cnt=0;

    for(int i=1;i<=N;i++){
        if(N/i<=1){
            break;
        }
        N=N/i;
        cnt++;
    }
    cout<<cnt+1;
    return 0;
}