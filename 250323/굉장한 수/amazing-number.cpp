#include <iostream>
using namespace std;

int main() {
    int N=0;

    cin>>N;

    if(N%2!=0&&N%3==0){
        cout<<"true";
    }
    else if(N%2==0&&N%5==0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}