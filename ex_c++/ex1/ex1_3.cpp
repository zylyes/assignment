//ex1_1.cpp
//时间：2024/03/06
//作者：周咏霖
//编译：PS D:\ex\ex1> g++ .\ex1_3.cpp -o ex1_3.exe
//运行：D:\ex\ex1> .\ex1_3.exe
//知识点：引用
//运行结果：i=11, r=11；i=88, r=88
#include <iostream>
using namespace std;

int main(void)
{
    int i=10;
    int &r=i;
    r++;
    cout<<"i="<<i<<", r="<<r<<'\n';
    i=88;
    cout<<"i="<<i<<", r="<<r<<'\n';
}