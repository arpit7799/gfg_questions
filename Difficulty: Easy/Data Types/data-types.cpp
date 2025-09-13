#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    // declare the variables here
    int a = 12;
    float b = 1.95;
    double c  = 2.33;
    long long d = 1234566778;
    // variables declaration checking
    if ((typeid(a) == typeid(int)) and (typeid(b) == typeid(float)) and
        (typeid(c) == typeid(double)) and (typeid(d) == typeid(long long)))
        cout << "verified\n";

    return 0;
}