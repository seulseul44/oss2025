#include <iostream>
using namespace std;

int main() {
    int s;
    int age;

    cin>>s>>age;

    if (s==0){
        if (age>=19){
            cout<<"MAN";
        }
        else{
            cout<<"BOY";
        }
    }
    else {
        if (age>=19){
            cout<<"WOMAN";
        }
        else {
            cout<<"GIRL";
        }
    }
    return 0;
}