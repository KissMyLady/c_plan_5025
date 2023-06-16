//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 21:18

#include <iostream>

using namespace std;

//函数重载注意事项
//1、引用作为重载条件

void func(int &a) {
    cout << "func (int &a) 调用 " << &a << endl;
}

void func(const int &a) {
    cout << "func (const int &a) 调用 " << &a << endl;
}


//2、函数重载碰到函数默认参数

void func2(int a, int b = 10) {
    cout << "func2(int a, int b = 10) 调用" << endl;
}

void func2(int a) {
    cout << "func2(int a) 调用" << endl;
}

void test_1() {
    int a = 10;
    func(a); //调用无const
    func(10);//调用有const


    //func2(10); //碰到默认参数产生歧义，需要避免
}

int main() {
    test_1();
    return 1;
}