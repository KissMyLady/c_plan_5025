//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 22:23
#include <fstream>
#include <string>

#include <iostream>
using namespace std;


//第三种
void test_3() {
    //读取头
    ifstream ifs;
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
        return;
    }
    //读取
    string buf;
    while (getline(ifs, buf)) {
        cout << buf << endl;
    }

    //关闭
    char c;
    while ((c = ifs.get()) != EOF) {
        cout << c;
    }
    ifs.close();
}

//第二种
void test_2() {
    ifstream ifs;
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
        return;
    }
    //第二种
    char buf[1024] = {0};
    while (ifs.getline(buf, sizeof(buf))) {
        cout << buf << endl;
    }

    char c;
    while ((c = ifs.get()) != EOF) {
        cout << c;
    }
    ifs.close();
}

//第一种方式
void test_1() {
    ifstream ifs;
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
        return;
    }


    char buf[1024] = {0};
    while (ifs >> buf) {
        cout << buf << endl;
    }
    char c;
    while ((c = ifs.get()) != EOF) {
        cout << c;
    }

    ifs.close();
}

int main() {
    test_3();
    return 1;
}