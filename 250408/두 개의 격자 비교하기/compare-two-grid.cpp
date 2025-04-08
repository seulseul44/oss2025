#include <iostream>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;

    int arr1[N][M];
    int arr2[N][M];

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr1[i][j]==arr2[i][j]){
                cout<<"0"<<" ";
            }
            else{
                cout<<"1"<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}