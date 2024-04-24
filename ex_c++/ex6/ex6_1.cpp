//ex6_1.cpp
//时间：2024/04/10
//作者：周咏霖
//编译：PS D:\ex\ex6> g++ .\ex6_1.cpp -o ex6_1.exe
//运行：D:\ex\ex6> .\ex6_1.exe
//输出：2
//     2
//     1
//     3
//功能：展示C++中的继承和多态性的概念，通过虚函数和指针的使用实现了多态行为。

#include <iostream>
using namespace std;
class ONE  //定义类ONE
{  
    public:
        virtual void f(){cout<<"1"<<endl;}  //虚函数f()
};
class TWO:public ONE  //定义类TWO继承自类ONE
{  
    public:
        TWO(){cout<<"2"<<endl;}  //构造函数
};
class THREE:public TWO  //定义类THREE继承自类TWO
{  
    public:
        virtual void f(){TWO::f(); cout<<"3";}  //重写了虚函数f()
};
int main()
{  
    ONE aa, *p;  //创建类ONE的对象aa和p指针
    TWO bb;  //类TWO的对象bb
    THREE cc;  //类THREE的对象cc
    p = &cc;  //使指针p指向cc对象
    p->f();  //使p指针所指向对象的f()函数
}

//分析
//1、创建aa，没有输出，因为ONE类的构造过程中没有输出操作
//2、创建ONE类型的指针p，没有输出
//3、创建bb，调用类TWO的构造函数，输出 "2"。
//4、创建cc，类THREE继承自类TWO，且类TWO继承自类ONE，构造cc时首先会调用基类ONE的构造函数，没有输出；
//   调用类TWO的构造函数输出"2"，最后调用类THREE的构造函数没有输出。
//5、将指针p指向cc，没有输出。
//6、指针p调用f()函数。因为指针p的静态类型是ONE*，但它实际指向一个 THREE 类型的对象；
//   所以这里发生了多态，调用类THREE重写的f()函数，该函数首先调用类TWO（实际是类ONE的）的f()函数，输出"1"；
//   然后调用类THREE本地函数，输出 "3"。