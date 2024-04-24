//ex1_2.cpp
//时间：2024/03/06
//作者：周咏霖
//编译：PS D:\GitHub\assignment\ex_c++\ex1> g++ .\ex1_2.cpp -o ex1_2.exe
//运行：D:\GitHub\assignment\ex_c++\ex1> .\ex1_2.exe
//知识点：指针
//运行结果：i=15
#include <iostream>
using namespace std ;

int main()
{
    int *p,i;
    i=5;
    p=&i;
    i=*p+10;
    cout<<"i="<<i<<endl;
}