#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int total=0;
    for(int i=1;i<=N;i++){
        
        for(int j=0;j<i;j++){
            total+=1;
            cout<<total<<" ";
        }
        cout<<"\n";
    }
    return 0;
}