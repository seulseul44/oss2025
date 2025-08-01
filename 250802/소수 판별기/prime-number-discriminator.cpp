#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    bool sat=false;

    for(int i=2;i<N;i++){
        if(N%i==0){
            sat = true;
        }
    }
    if(sat==true){
        cout<<"C";
    }
    else{
        cout<<"P";
    }
    return 0;
}