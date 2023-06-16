//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 17:45

#include <iostream>

using namespace std;



void mySwap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}


void mySwap02(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void mySwap03(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


void test_1() {
    int a = 10;
    int b = 20;

    mySwap01(a, b);
    cout << "a:" << a << " b:" << b << endl;

    mySwap02(&a, &b);
    cout << "a:" << a << " b:" << b << endl;

    mySwap03(a, b);
    cout << "a:" << a << " b:" << b << endl;

}

int main() {
    test_1();
    return 1;
}