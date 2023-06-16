//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 21:35

#include <iostream>

using namespace std;

class Person {
public:
    //构造函数
    Person() {
        cout << "创建初始化 Person的构造函数调用" << endl;
    }

    //析构函数
    ~Person() {
        cout << "销毁阶段 Person的析构函数调用" << endl;
    }

};


void test_1() {
    Person p;
}

int main() {
    test_1();
    return 1;
}