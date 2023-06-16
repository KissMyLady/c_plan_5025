//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 21:33

#include <iostream>

using namespace std;

class Person {

private:
    string m_Name;
    int m_Age;
    string m_Lover;

public:

    void setName(string name) {
        m_Name = name;
    }
    string getName() {
        return m_Name;
    }

    int getAge() {
        return m_Age;
    }
    void setAge(int age) {
        if (age < 0 || age > 150) {
            cout << "你个老妖精!" << endl;
            return;
        }
        m_Age = age;
    }

    void setLover(string lover) {
        m_Lover = lover;
    }

};


void test_1() {
    Person p;
    //姓名设置
    p.setName("张三");
    cout << "姓名： " << p.getName() << endl;

    //年龄设置
    p.setAge(50);
    cout << "年龄： " << p.getAge() << endl;

    //情人设置
    p.setLover("苍井");
    //cout << "情人： " << p.m_Lover << endl;  //只写属性，不可以读取

}


int main() {
    test_1();
    return 1;
}