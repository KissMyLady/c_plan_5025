//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 21:51

#include <iostream>

using namespace std;

class Person {
public:

    Person(int age) {
        //1、当形参和成员变量同名时，可用this指针来区分
        this->age = age;
    }

    Person &PersonAddPerson(Person p) {
        this->age += p.age;
        //返回对象本身. 在类的非静态成员函数中返回对象本身，可使用return *this
        return *this;
    }

    int age;
};

void test_1() {
    Person p1(10);
    cout << "p1.age = " << p1.age << endl;

    Person p2(10);
    p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
    cout << "p2.age = " << p2.age << endl;
}

int main() {
    test_1();
    return 1;
}