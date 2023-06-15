#include <iostream>
#include <vector>  //使用容器类代理数组

using namespace std;


//冒泡排序
void bubbleSort_v2(vector<int> &arr) {
    int len = arr.size();
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSort(int arr[], int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//打印数组
void printArr(int arr[], int len) {
    //int len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << endl;
    }
}


//不传入len, 使用升级版的
void test_3() {
    vector<int> arr = {4, 20, 13, 41, 10, 20, 89, 23, 56, 1100, 220};
    bubbleSort_v2(arr);
    for (auto &x: arr) {
        cout << x << " ";
    }
    cout << endl;
}

void test_2() {
    int arr[] = {4, 20, 13, 41, 10, 20, 89, 23, 56, 1100, 220};
    int len = sizeof(arr) / sizeof(int);
    bubbleSort(arr, len);
    printArr(arr, len);
}

//使用指针访问list
void test_1() {
    int arr_list[] = {1, 2, 3, 4, 5, 67, 8, 0, 10};
    int *p_list = arr_list;

    for (int i = 0; i < 10; i++) {
        cout << "arr[i]: " << *p_list << endl;
        p_list++;
        cout << "当前指针内存地址: " << p_list << endl;
    }


}


// 主程序
int main() {
    test_3();
    return 0;
}