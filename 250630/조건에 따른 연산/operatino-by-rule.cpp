#include <iostream>
using namespace std;

int main() {
    int N;

    cin>>N;

    int cnt=0;
    while(1){
        if(N>=1000){
            cout<<cnt;
            break;
        }
        if(N%2==0){
            N=N*3+1;
            cnt++;
        }
        else{
            N=N*2+2;
            cnt++;
        }
    }
    return 0;
}