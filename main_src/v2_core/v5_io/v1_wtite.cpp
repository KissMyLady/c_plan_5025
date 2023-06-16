//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 22:22
#include <fstream>
#include <iostream>

using namespace std;

void test_1() {
    ofstream ofs;
    ofs.open("test.txt", ios::out);

    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18" << endl;

    ofs.close();
}

int main() {
    test_1();
    return 1;
}