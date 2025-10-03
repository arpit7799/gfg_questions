#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;   // input x and y

    int p = x + y;   // addition
    int q = x - y;   // subtraction
    int r = x * y;   // multiplication
    int s = x / y;   // division
    int t = x % y;   // modulo

    cout << p << " " << q << " " << r << " " << s << " " << t;

    return 0;
}