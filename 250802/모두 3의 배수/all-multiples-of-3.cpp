#include <iostream>
using namespace std;

int main() {
    // Please write your code here.\

    

    bool sat=false;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
        }

    for(int i=0;i<5;i++){
        if(arr[i]%3!=0){
            sat=true;
        }
    }
    if(sat==false){
        cout<<1;
    }
    else{
        cout<<0;
    }

    return 0;
}