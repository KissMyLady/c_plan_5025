#include <iostream>

using namespace std;


int *func() {
    int a = 10;
    int *p = &a;
    return p;
}


//程序运行后
int test_1() {
    int *p = func();

    cout << *p << endl;
    cout << *p << endl;

    return 0;
}


int main() {

    test_1();
    return 1;
}
