#include <iostream>
using namespace std;

int main() {
    int A_math,A_eng=0;
    int B_math,B_eng=0;

    cin>>A_math>>A_eng;
    cin>>B_math>>B_eng;

    cout<<(A_math>B_math)&&(A_eng>B_eng);
    return 0;
}