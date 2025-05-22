#include <iostream>
using namespace std;

int main() {
    int Am, Ae,Bm,Be;
    cin>>Am>>Ae>>Bm>>Be;

    if (Am>Bm&&Ae>Be){
        cout<<"1";
    }
    else{
        cout<<0;
    }
    return 0;
}