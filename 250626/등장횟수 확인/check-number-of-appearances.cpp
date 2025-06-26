#include <iostream>
using namespace std;

int main() {
    int cnt=0;
    int arr[5];

    for(int i=0;i<5;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}