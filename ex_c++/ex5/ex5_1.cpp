//ex5_1.cpp
//时间：2024/04/03
//作者：周咏霖
//编译：PS D:\ex\ex5> g++ .\ex5_1.cpp -o ex5_1.exe
//运行：D:\ex\ex5> .\ex5_1.exe
//输出：A:Constructor
//     B:Constructor
//     B:Destructor
//     A:Destructor
//类的构造函数和析构函数的调用顺序，以及继承关系中的构造函数和析构函数调用情况
#include <iostream>
using namespace std;

//定义类A
class A
{
      public:
            A(){cout<<"A:Constructor"<<endl;}//类A的构造函数——第一个输出
            ~A(){cout<<"A:Destructor" <<endl;}//类A的析构函数——第四个输出
};

//定义类B，类B继承自类A
class B:public A
{
      public: 
            B(){cout<<"B:Constructor" <<endl;}//类B的构造函数——第二个输出
            ~B(){cout<<"B:Destructor"<<endl;}//类B的析构函数——第三个输出
};
int main()
{  
      B b;//创建B类的对象b
}