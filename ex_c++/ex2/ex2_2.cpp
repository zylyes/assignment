//ex2_2.cpp
//时间：2024/03/13
//作者：周咏霖
//编译：PS D:\ex\ex2> g++ .\ex2_2.cpp -o ex2_2.exe
//运行：D:\ex\ex2> .\ex2_2.exe
//输出行1：zhangsan 1001 20 95.5
//输出行2：lixing 1021 20 85.5
//掌握用类和对象编制基于对象的程序
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int id;
    int age;
    float score;
public:
    void setXSXX(string n, int i, int a, float n3)
    {
        name=n;
        id = i;
        age = a;
        score = n3;
    }
    void outXSXX()
    {
        cout<<name<<" "<<id<<" "<<age<<" "<<score<<endl;
    }
};
int main() {
    Student stu1;
    stu1.setXSXX("zhangsan", 1001, 20, 95.5); // 设置学生信息
    stu1.outXSXX(); // 显示学生信息
    Student stu2;
    stu2.setXSXX("lixing", 1021, 20, 85.5); // 设置学生信息
    stu2.outXSXX(); // 显示学生信息
    return 0;
}