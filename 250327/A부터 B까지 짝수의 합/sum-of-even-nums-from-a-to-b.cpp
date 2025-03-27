#include <iostream>
using namespace std;

int main() {
    int A,B=0;
    cin>>A>>B;

    int total=0;
    
    for(int i=A;i<=B;i++){
        if (i%2==0){
            total+=i;
        }
        else {
            continue;
        }
    }
    cout<<total;
    return 0;
}