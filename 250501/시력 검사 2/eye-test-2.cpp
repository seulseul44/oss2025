#include <iostream>
using namespace std;

int main() {
    float a;
    cin>>a;

    if(a>=1){
        cout<<"High";
    }
    else if(a>=0.5){
        cout<<"Middle";

    }
    else{
        cout<<"Low";
    }
    return 0;
}