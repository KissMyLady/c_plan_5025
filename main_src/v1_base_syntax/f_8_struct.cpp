#include <iostream>

using namespace std;

//结构体定义
struct student {
    int age;
    string name;
    int score;
} stu3;


//结构体指针
void test_4() {
    student std4 = {100, "张三丰", 2345};

    student * p = &std4;
    cout << "p 打印: "<< p << endl;
    cout << "&std4 打印: "<< &std4 << endl;

    //通过指针访问成员
    p -> name = "吴王勾践";

    cout << " 姓名: " << p->name;
    cout << " 年龄: " << p->age;
    cout << " 得分: " << p->score << endl;

}

//结构体嵌套
void test_2() {
    struct student arr[3] = {
            {122, "王四",  2323},
            {312, "张三",  2223},
            {132, "李贵", 4223},
    };

    for (int i = 0; i < 3; ++i) {
        cout << " 对象打印age: " << arr[i].age;
        cout << " 对象打印name: " << arr[i].name;
        cout << " 对象打印score: " << arr[i].score<< endl;
    }

}

// 结构体的定义与使用
void test_1() {

    //结构体创建
    struct student stu1;

    stu1.age = 12;
    stu1.name = "李四";
    stu1.score = 223;
    cout << "stu1: " << stu1.age << endl;

    stu3.age = 212;
    stu3.name = "李四";
    stu3.score = 223;
    cout << "stu3: " << stu3.age << endl;

}


int main() {
    test_4();
    return 1;
}