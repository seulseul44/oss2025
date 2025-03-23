#include <iostream>
#include <string>

using namespace std;

struct Product {
    string product_name;
    int product_code;
};

int main() {
    Product product1 = {"codetree", 50};  // First object with initialized values
    Product product2;

    cin >> product2.product_name >> product2.product_code;  // Input values for the second object

    cout << "product " << product1.product_code << " is " << product1.product_name << endl;
    cout << "product " << product2.product_code << " is " << product2.product_name << endl;

    return 0;
}
