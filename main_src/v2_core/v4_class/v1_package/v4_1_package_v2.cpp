//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 21:22

#include <iostream>

using namespace std;

//学生类
class Student {

public:
    string m_name;
    int m_id;

public:
    void setName(string name) {
        m_name = name;
    }

    void setID(int id) {
        m_id = id;
    }

    void showStudent() {
        cout << "name:" << m_name << " ID:" << m_id << endl;
    }

};


void test_1() {
    Student stu;
    stu.setName("德玛西亚");
    stu.setID(250);
    stu.showStudent();
}

int main() {
    test_1();
    return 1;
}