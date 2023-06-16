﻿//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 21:55

#include <iostream>

using namespace std;

//Java页面
class Java {
public:
    void header() {
        cout << "首页、公开课、登录、注册...（公共头部）" << endl;
    }

    void footer() {
        cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
    }

    void left() {
        cout << "Java,Python,C++...(公共分类列表)" << endl;
    }

    void content() {
        cout << "JAVA学科视频" << endl;
    }
};

//Python页面
class Python {
public:
    void header() {
        cout << "首页、公开课、登录、注册...（公共头部）" << endl;
    }

    void footer() {
        cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
    }

    void left() {
        cout << "Java,Python,C++...(公共分类列表)" << endl;
    }

    void content() {
        cout << "Python学科视频" << endl;
    }
};

//C++页面
class CPP {
public:
    void header() {
        cout << "首页、公开课、登录、注册...（公共头部）" << endl;
    }

    void footer() {
        cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
    }

    void left() {
        cout << "Java,Python,C++...(公共分类列表)" << endl;
    }

    void content() {
        cout << "C++学科视频" << endl;
    }
};

void test_1() {
    //Java页面
    cout << "Java下载视频页面如下： " << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "--------------------" << endl;

    //Python页面
    cout << "Python下载视频页面如下： " << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout << "--------------------" << endl;

    //C++页面
    cout << "C++下载视频页面如下： " << endl;
    CPP cp;
    cp.header();
    cp.footer();
    cp.left();
    cp.content();
}

int main() {
    test_1();
    return 1;
}