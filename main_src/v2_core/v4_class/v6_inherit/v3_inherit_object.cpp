//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 22:07

#include <iostream>
using namespace std;

/**
 * 4.6.3 继承中的对象模型
 *
 * 问题：从父类继承过来的成员，哪些属于子类对象中？
 * */
class Base {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C; //私有成员只是被隐藏了，但是还是会继承下去
};

//公共继承
class Son : public Base {
public:
    int m_D;
};


void test_1() {
    cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main() {
    test_1();
    return 1;
}