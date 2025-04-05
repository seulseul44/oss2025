#include <iostream>
using namespace std;

int main() {
    int N=0;
    cin>>N;


    for(int i=0;i<N;i++){
        int a,b=0;
        cin>>a>>b;
        int total=0;
        for(int j=a;j<=b;j++){
            if(j%2==0){
                total+=j;
            }
            else{
                continue;
            }
        }
        cout<<total<<"\n";
    }
    return 0;
}