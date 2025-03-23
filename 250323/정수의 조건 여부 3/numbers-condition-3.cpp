#include <iostream>
using namespace std;

int main() {
    int a=0;
    cin>>a;
    if (a%13==0||a%19==0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}