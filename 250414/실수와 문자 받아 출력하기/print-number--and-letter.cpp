#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char c;
    double a,b;
    cin>>c;
    cin>>a>>b;
    

    cout<<c<<"\n";
    cout<<fixed<<setprecision(2)<<a<<"\n"<<b;
    return 0;
}