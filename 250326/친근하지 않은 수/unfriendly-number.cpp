#include <iostream>
using namespace std;

int main() {
    int N=0;
    cin>>N;
    int count=0;

    for(int i=0;i<=N;i++){
        if (i%2==0||i%3==0||i%5==0){
            continue;
        }
        else{
            count++;
        }
    }
    cout<<count;
    return 0;
}