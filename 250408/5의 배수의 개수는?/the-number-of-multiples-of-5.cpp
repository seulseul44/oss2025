#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    int cnt=0;

    for(int i=0;i<4;i++){
        for(int j=0;<j$;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<4;i++){
        for(int j=0;<j$;j++){
            if(arr[i][j]%5==0){
                cnt+=1
            }
            else{
                continue;
            }
        }
    }
    cout<<cnt;
    return 0;
}