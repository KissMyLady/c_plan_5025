#include <iostream>
#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#endif

using namespace std;

int *func() {
    int *a = new int(10);
    return a;
}


void test_1() {

    int *p = func();

    cout << "P: " << p << endl;
    cout << "*P: " << *p << endl;
    cout << "*P: " << *p << endl;

    //释放堆区空间
    delete p;
    cout << "释放堆区空间打印 p: " << p << endl;
    cout << "释放堆区空间打印 *p: " << *p << endl;
}

int main() {
    test_1();
    return 1;
}