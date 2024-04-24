//ex7_1.cpp
//时间：2024/04/11
//作者：周咏霖
//编译：PS D:\ex\ex7> g++ .\ex7_1.cpp -o ex7_1.exe
//运行：D:\ex\ex7> .\ex7_1.exe
//程序运行结果为：
//In Base Class
//In Sub Class
//功能：通过虚函数的多态性，实现了基类和派生类对象的动态绑定。

#include<iostream>
using namespace std;

class Base
{
   public:
       // 在基类中的虚函数
       virtual void fn() { cout <<"In Base Class\n";}
};

class SubClass : public Base
{
   public:
       // 在派生类中重写虚函数
       virtual void fn(){ cout <<"In Sub Class\n";  }
};

int main()
{
   Base bc; // 创建一个Base类的对象
   Base *p; // 指向Base类的指针
   SubClass sc; // 创建一个SubClass类的对象

   p=&bc;   // 将指针指向Base类对象
   p->fn(); // 通过Base类指针调用fn()，输出："In Base Class"

   p=&sc;   // 将指针指向SubClass类对象
   p->fn(); // 通过Base类指针调用fn()，输出："In Sub Class"
}

//分析：
//1. 创建`Base`类的对象`bc`。
//2. 创建`Base`类的指针`p`。
//3. 创建`SubClass`类的对象`sc`。
//4. 将`p`指针指向`bc`对象，并通过`p`调用`fn()`函数。因为`p`指向的是`Base`类的对象，所以这里调用的是`Base`类中的`fn()`函数，打印`"In Base Class\n"`。
//5. 将`p`指针指向`sc`对象，并通过`p`调用`fn()`函数。这里是多态性的体现：虽然`p`是`Base`类型的指针，但它实际上指向的是`SubClass`类型的对象，因此调用的是`SubClass`重写的`fn()`函数，打印`"In Sub Class\n"`。