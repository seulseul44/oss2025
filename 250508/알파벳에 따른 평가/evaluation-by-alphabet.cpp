#include <iostream>
using namespace std;

int main() {
    char a;
    cin>>a;

    if(a=='S'){
        cout<<"Superior";
    }
    else if(a=='C'){
        cout<<"Usually";
    }
    else if(a=='Z'){
        cout<<"Failure";
    }
    return 0;
}