#include <iostream>

using namespace std;


void test_1() {

    int a = 10;

    cout << "(int) a1: " <<  &a << endl;
    cout << "(int) a2: " << (int*) &a << endl;

}

// 主程序
int main() {
    cout << "Hello World !" << endl;

    test_1();
    // system("pause");

    return 1;
}