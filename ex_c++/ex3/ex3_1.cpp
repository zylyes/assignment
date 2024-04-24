//ex3_1.cpp
//时间：2024/03/20
//作者：周咏霖
//编译：PS D:\ex\ex3> g++ .\ex3_1.cpp -o ex3_1.exe
//运行：D:\ex\ex3> .\ex3_1.exe
//输出：1) Overloaded constructor
//     id:1
//     math:98,english:99,cpp:100
//     id:2
//     math:70,english:80,cpp:0
//     2) copy constructor
//     id:1
//     math:98,english:99,cpp:100
//     3) operator = 
//     id:2
//     math:70,english:80,cpp:0
//     5. class variables
//     school:ecut
//建立一个名为Student的类，采用构造函数初始化学生id、课程的分数值，然后调用内联成员函数在屏幕输出学生信息。
#include <iostream>
using namespace std;
class Courses{
public:
    float math = 0.0;
    float english = 0.0;
    float cpp = 0.0;
};

class Student {
private:
    int id;
    Courses*course;
public:
    static string school;
    Student(int id, float math, float english, float cpp=0.0)
    {
        this->id = id;
        course = new Courses();
        course->math = math;
        course->english = english;
        course->cpp = cpp;
    }
    ~Student() {
        delete course;
    }
     Student(const Student& other) : id(other.id) {
        course= new Courses(*other.course);
    }

    Student& operator=(const Student& other) {
        if (this != &other) {
            id = other.id;
            delete course;
            course = new Courses(*other.course);
        }
        return *this;
    }
    void display()
    {
        cout<<"id:"<<id<<endl;
        cout<<"math:"<<course->math<<",english:"<<course->english<<",cpp:"<<course->cpp<<endl;
    }
};

string Student::school = "ecut";

int main()
{
    cout<<"1) Overloaded constructor"<<endl;

    Student s1(1,98.0,99.0,100.0);
    s1.display();

    Student s2(2,70.0,80.0);
    s2.display();

    cout<<"2) copy constructor"<<endl;
    Student s4(s1);
    s4.display();

    cout<<"3) operator = "<<endl;
    s4=s2;
    s4.display();

    cout<<"5. class variables "<<endl;
    cout<<"school:" << Student::school <<endl;

    return 0;
}