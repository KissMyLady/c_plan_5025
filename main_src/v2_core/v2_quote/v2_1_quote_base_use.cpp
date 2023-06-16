#include <iostream>
using namespace std;


void test_2() {
    int a = 10;
    int b = 20;

    int &c = a;
    c = b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

void test_1() {
    int a = 10;
    int &b = a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main() {
    test_2();
    return 1;
}