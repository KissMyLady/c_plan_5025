#include <iostream>

using namespace std;

//结构体定义
struct student {
    int age;
    string name;
    int score;
} stu3;



void printStudent(const student *stu){
    // 不允许赋值了
    // stu->age = 20;
    cout << "姓名: "<< stu->name << endl;

}

// 结构体的定义与使用
void test_1() {

    student stu = {213, "吴太伯世家", 231};

    printStudent(&stu);

}


int main() {
    test_1();
    return 1;
}