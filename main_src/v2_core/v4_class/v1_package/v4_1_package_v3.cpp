//coding:utf-8
//Author:mylady
//Datetime:2023/6/16 21:22

#include <iostream>

using namespace std;
//三种权限
//公共权限  public     类内可以访问  类外可以访问
//保护权限  protected  类内可以访问  类外不可以访问
//私有权限  private    类内可以访问  类外不可以访问

class Person {
    //公共权限
public:
    string m_Name;

    //保护权限
protected:
    string m_Car;

    //私有权限
private:
    string m_Password;

public:
    void func() {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = "这是密码";
    }

    void init(){
        m_Name = "张三";
        m_Car = "Mark.2";
        m_Password = "9TQum#CSv2w04t%f7N=$$in-E%6p@8XC ";
    }

    void showData(){
        cout << "name: "<< m_Name << endl;
        cout << "m_Car: "<< m_Car << endl;
        cout << "m_Password: "<< m_Password << endl;
    }
};

void test_1() {

    Person p;
    p.init();
    p.m_Name = "李四";
    //p.m_Car = "奔驰";  //保护权限类外访问不到
    //p.m_Password = 123; //私有权限类外访问不到

    p.showData();

}

int main() {
    test_1();
    return 1;
}