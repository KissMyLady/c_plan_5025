#include <iostream>
using namespace std;

void test_1() {

    int * arr = new int[10];

    for (int i = 0; i < 10; ++i) {
        arr[i] = 100 + i;
    }

    for (int i = 0; i < 10; ++i) {
        cout << " arr[i]: " << arr[i] << endl;
    }

    //ÊÍ·ÅÊý×é
    delete[] arr;
}

int main() {
    test_1();
    return 1;
}