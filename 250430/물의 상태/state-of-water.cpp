#include <iostream>
using namespace std;

int main() {
    int C;
    cin>>C;

    if (C<0){
        cout<<"ice";
    }
    else if(C>=100){
        cout<<"vapor";
    }
    else{
        cout<<"water";
    }
    return 0;
}