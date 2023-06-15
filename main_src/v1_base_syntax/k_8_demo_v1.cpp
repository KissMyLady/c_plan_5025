#include <iostream>
#include <vector>
#include <ctime>

using namespace std;


struct Student {
    string name;
    int score;
};

struct Teacher {
    string name;
    std::vector<Student> sArray;
};

//添加数据
std::vector<Teacher> allocateSpace(std::vector<Teacher> tArry) {
    //随机种子
    srand((unsigned int) time(NULL));

    for (int j = 0; j < 10; ++j) {
        Teacher t1;
        t1.name = "复制老师_" + to_string(j);

        std::vector<Student> sArray;
        for (int i = 0; i < rand() % 61; ++i) {
            Student st1 = {"学生x_" + to_string(i), rand() % 61 + rand() % 20};
            t1.sArray.push_back(st1);
        }
        tArry.push_back(t1);
    }

    return tArry;
}


void printTeachers(std::vector<Teacher> tArry) {
    for (int i = 0; i < tArry.size(); ++i) {
        cout << "教师姓名: " << tArry[i].name;
        cout << "教师管理的学生: " << endl;
        for (int j = 0; j < tArry[i].sArray.size(); ++j) {
            Student ss = tArry[i].sArray[j];
            cout << "\t当前学生姓名: " << ss.name;
            cout << "\t当前学生分数: " << ss.score << endl;
        }
    }
}


void test_1() {

    std::vector<Teacher> tArry;

    std::vector<Teacher> res = allocateSpace(tArry);
    printTeachers(res);
}

int main() {
    test_1();
    return 1;
}