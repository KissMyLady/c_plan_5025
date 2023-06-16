//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 22:29

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person {
public:
    char m_Name[64];
    int m_Age;
};

void test_1() {
    ifstream ifs("person.txt", ios::in | ios::binary);
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
    }

    Person p;
    ifs.read((char *) &p, sizeof(p));

    cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
}

int main() {
    test_1();
    return 1;
}