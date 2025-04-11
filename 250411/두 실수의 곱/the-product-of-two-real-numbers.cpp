#include <iostream>
using namespace std;
#include <iomanip>


int main() {
    float a=5.26;
    float b=8.27;

    cout<<fixed<<setprecision(3)<<a*b;
    return 0;
}