#include <iostream>
using namespace std;

int main() {
    string text;
    string text2;

    cin>>text>>text2;

    if (text.length()>text2.length()){
        cout<<text<<" "<<text.length();
    }
    else if (text.length()==text2.length()){
        cout<<"same";
    }
    else {
         cout<<text2<<" "<<text2.length();
    }
    return 0;
}