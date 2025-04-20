#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    if(N<5){
        cout<<N*N<<"\n"<<"tiny";
    }
    else{
        cout<<N*N;
    }
    return 0;
}