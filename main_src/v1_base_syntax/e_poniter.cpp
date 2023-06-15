#include <iostream>

using namespace std;


// 野指针 指向非法的内存空间
void test_4() {

    int * p_v3 = (int *)0x1100;
    cout << "野指针 p_v3: " << p_v3 << endl;
    cout << "野指针 *p_v3: " << *p_v3 << endl;

}

// 空指针 指向内存编号为0的空间
void test_3() {
    int * p_v2 = NULL;

    //cout << "空指针打印: "<< *p_v2 << endl;   //当前代码不允许执行
    cout << "空指针打印: "<< p_v2 << endl;
}


// 指针空间
void test_2() {

    int b = 100;

    int *pointer_v1 = &b;

    cout << "pointer_v1指针空间所占大小: " << sizeof(pointer_v1) << endl;
    cout << "*pointer_v1指针空间所占大小: " << sizeof(*pointer_v1) << endl;
    cout << "sizeof(char *): " << sizeof(char *) << endl;
    cout << "sizeof(int *): " << sizeof(int *) << endl;
    cout << "sizeof(char *): " << sizeof(float *) << endl;
    cout << "sizeof(char *): " << sizeof(long *) << endl;
    cout << "sizeof(char *): " << sizeof(long long *) << endl;

}


//指针
void test_1() {
    int a = 9;

    int c_10 = 0;

    int *p = &a;

    cout << "指针打印: " << *p << endl;
    cout << "指针打印2: " << p << endl;
    cout << "指针打印3: " << &a << endl;
    cout << "指针打印4: " << &c_10 << endl;

}


// 主程序
int main() {
    test_1();
    return 0;
}