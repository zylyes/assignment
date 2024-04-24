//ex1_1.cpp
//时间：2024/03/06
//作者：周咏霖
//编译：PS D:\ex\ex1> g++ .\ex1_4.cpp -o ex1_4.exe
//运行：D:\ex\ex1> .\ex1_4.exe
//知识点：循环
//运行结果：1 2 5 11 21
#include <iostream>
using namespace std;

int f(int i)
{
    static int k=1;
    for(;i>0;i--)
        k +=i;
    return k;

}

int main()
{
    int i;
    for(i=0;i<5;i++)
        cout<<f(i)<<" ";
}