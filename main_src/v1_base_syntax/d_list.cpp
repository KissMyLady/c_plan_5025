#include <iostream>

using namespace std;

//数组
void test_1() {

    int score[2][3] = {
            {1, 2, 3},
            {2, 3, 4}
    };
    cout << "二维数组大小: " << sizeof(score) << endl;
    cout << "二维数组第一行大小: " << sizeof(score[0]) << endl;

}


// 主程序
int main() {
    test_1();
    return 0;
}