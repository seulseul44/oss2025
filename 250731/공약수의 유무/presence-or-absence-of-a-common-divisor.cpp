#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin>>A>>B;

    bool sat=false;

    for(int i=A;i<=B;i++){
        if(1920%i==0&&2880%i==0){
            sat=true;
        }
    }
    
    if( sat==true){
        cout<<1;

    }
    else{
        cout<<0;
    }
    return 0;
}