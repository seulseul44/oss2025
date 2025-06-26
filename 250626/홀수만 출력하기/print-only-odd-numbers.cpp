#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    int arr[]=0;

    for(int i=0;i<N;i++){
        cin>>arr[i];

        if(arr[i]%2!=0&&arr[i]%3==0){
            cout<<arr[i]<<"\n";
        }
    }

    
    return 0;
}