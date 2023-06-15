#include <iostream>

using namespace std;

//值交换
void swap_1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

//内存地址交换
void swap_2(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


//测试
void test_1() {
    int a = 41;
    int b = 2053;

    swap_1(a, b);  //函数内部值传递
    cout << "函数内部值传递a: " << a << endl;
    cout << "函数内部值传递b: " << b << endl;
    cout << "" << endl;

    swap_2(&a, &b); //内存地址值传递
    cout << "内存地址值传递a: " << a << endl;
    cout << "内存地址值传递b: " << b << endl;
    cout << "" << endl;
}


// 主程序
int main() {
    test_1();
    return 0;
}