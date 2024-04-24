//ex5_2.cpp
//时间：2024/04/03
//作者：周咏霖
//编译：PS D:\GitHub\assignment\ex_c++\ex5> g++ .\ex5_2.cpp -o ex5_2.exe
//运行：D:\GitHub\assignment\ex_c++\ex5> .\ex5_2.exe
//输出：Destructor B!7
//     Destructor A!6
//     Destructor B!0
//     Destructor A!5
//顺序：1. 对象x的构造过程：先调用A类的构造函数，然后调用B类的构造函数。
//     2. 对象y的构造过程：先调用A类的构造函数，然后调用B类的构造函数。
//     3. 对象y的析构过程：先调用B类的析构函数，然后调用A类的析构函数。
//     4. 对象x的析构过程：先调用B类的析构函数，然后调用A类的析构函数。
//类的构造函数和析构函数的调用顺序，以及继承关系中的构造函数和析构函数调用情况
#include <iostream>
using namespace std;

//定义类A
class A
{
      int a;//定义私有成员a
      public :
            A(int aa=0)   {  a=aa;  }//类A构造函数，将传入的参数赋值给a
            ~A() { cout<<"Destructor A!"<<a<<endl; }//类A的析构函数，输出"a"的值
};

//定义类B，类B继承自类A
class B: public A
{
      int  b;//定义私有成员b
      public: 
            B(int aa=0, int bb=0) : A(aa)  { b=bb; }//类B构造函数，调用类A的构造函数并将传入的参数赋值给b
            ~B() { cout<<"Destructor B!"<<b<<endl; }//类B的析构函数，输出"b"的值
};

int main()
{
      B x(5), y(6,7);//调用类B的构造函数创建类B的对象x和y，并初始化
}