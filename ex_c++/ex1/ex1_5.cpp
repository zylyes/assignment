//ex1_1.cpp
//时间：2024/03/06
//作者：周咏霖
//编译：PS D:\ex\ex1> g++ .\ex1_5.cpp -o ex1_5.exe
//运行：D:\ex\ex1> .\ex1_5.exe
//知识点：变量作用域
//运行结果：a:0  b:-9  m:1；a:4  b:10  n:13；a:0  b:-5  n:13；a:6  b:10  n:35
#include <iostream>
using namespace std;

void func();
int n=1;
int main()
{
    static int a;
    int b=-9;
    cout <<"a:"<<a<<"  b:"<<b<<"  m:"<<n<<endl;
    b +=4;
    func();
    cout <<"a:"<<a<<"  b:"<<b<<"  n:"<<n<<endl;
    n+=10;
    func();
}

void func()
{
    static int a=2;
    int b=5;
    a+=2;
    n+=12;
    b+=5;
    cout <<"a:" <<a<<"  b:" <<b<<"  n:" <<n <<endl ;
}