#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin, num);  // take input as string

    int value = stoi(num);  // convert string to int
    int doubled = 2 * value; // double the value

    cout << doubled << endl; // print result

    return 0;
}