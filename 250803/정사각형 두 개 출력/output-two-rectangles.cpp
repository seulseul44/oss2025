#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int a=0;
    while(a<2){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<"*";
            }
         cout<<"\n";
        }
        a++;
        cout<<"\n";
    }
    return 0;
}