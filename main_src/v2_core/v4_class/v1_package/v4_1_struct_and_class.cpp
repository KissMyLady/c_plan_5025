﻿//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 21:30

#include <iostream>

using namespace std;

class C1 {
    int m_A; //默认是私有权限
};

struct C2 {
    int m_A;  //默认是公共权限
};

void test_1() {
    C1 c1;
    c1.m_A = 10; //错误，访问权限是私有

    C2 c2;
    c2.m_A = 10; //正确，访问权限是公共
}

int main() {
    test_1();
    return 1;
}