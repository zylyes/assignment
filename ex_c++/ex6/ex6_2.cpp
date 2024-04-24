//ex6_2.cpp
//时间：2024/04/10
//作者：周咏霖
//编译：PS D:\GitHub\assignment\ex_c++\ex6> g++ .\ex6_2.cpp -o ex6_2.exe
//运行：D:\GitHub\assignment\ex_c++\ex6> .\ex6_2.exe
//输出：Please enter the name, age, title, post, and wages:
//ilxin
//23
//professor
//teach
//10000
//This person's information:
//Name: ilxin, Age: 23, Title: professor
//Post: teach, Wages: 10000
//功能：掌握通过多重继承派生出一个新的类的方法

#include <iostream>
#include <string>
using namespace std;

// 定义教师类
class Teacher {
public:
    // 构造函数初始化成员变量
    Teacher(string name, int age, string title) : name(name), age(age), title(title) {}

    // 显示教师信息
    void display() {
        cout << "This person's information: " << endl
             << "Name: " << name << ", Age: " << age << ", Title: " << title << endl;
    }

protected:
    string name;
    string title;
    int age;
};

// 定义干部类
class Cadre {
public:
    // 构造函数初始化成员变量
    Cadre(string name, int age, string post) : name(name), age(age), post(post) {}

    // 显示干部信息
    void display() {
        cout << "This person's information: " << endl
             << "Name: " << name << ", Age: " << age << ", Post: " << post << endl;
    }

protected:
    string name;
    string post;
    int age;
};

// 定义教师干部类，继承自教师类和干部类
class Teacher_Cadre : public Teacher, public Cadre {
public:
    // 构造函数初始化成员变量
    Teacher_Cadre(string name, int age, string title, string post, double wages)
        : Teacher(name, age, title), Cadre(name, age, post), wages(wages) {}

    // 显示教师干部信息
    void display() {
        // 由于姓名和年龄在两个基类中都有，这里我们选择使用Teacher基类的版本作为输出的代表
        Teacher::display(); // 显示教师信息，包括姓名和年龄
        cout << "Post: " << post << ", Wages: " << wages << endl;
    }

private:
    double wages;
};

int main() {
    cout << "Please enter the name, age, title, post, and wages:" << endl;
    string name, title, post;
    int age;
    double wages;

    cin >> name >> age >> title >> post >> wages;

    Teacher_Cadre tc(name, age, title, post, wages);
    tc.display(); // 注意这里直接调用了派生类中的display方法

    return 0;
}
