//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 19:17

# include <iostream>
using namespace std;


//返回局部变量引用
int & test01() {
    int a = 10; //局部变量
    int &quote_1 = a;
    return quote_1;
}

//返回静态变量引用
int &test02() {
    static int a = 20;
    return a;
}


void test_1() {
    /**
     * 2.4 引用做函数返回值
     *
     * 作用：引用是可以作为函数的返回值存在的
     * 注意：不要返回局部变量引用
     * 用法：函数调用作为左值
     * */

    //不能返回局部变量的引用
    int& ref = test01();
    cout << "不能返回局部变量的引用 ref = " << ref << endl;
    cout << "不能返回局部变量的引用 ref = " << ref << endl;

    //如果函数做左值，那么必须返回引用
    int& ref2 = test02();
    cout << "如果函数做左值，那么必须返回引用 ref2 = " << ref2 << endl;
    cout << "如果函数做左值，那么必须返回引用 ref2 = " << ref2 << endl;

    test02() = 1000;

    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;


}

int main() {
    test_1();
    return 1;
}