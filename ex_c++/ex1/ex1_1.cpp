//ex1_1.cpp
//时间：2024/03/06
//作者：周咏霖
//编译：PS D:\GitHub\assignment\ex_c++\ex1> g++ .\ex1_1.cpp -o ex1_1.exe
//运行：D:\GitHub\assignment\ex_c++\ex1> .\ex1_1.exe
//运行结果：12,28
#include <iostream>
using namespace std;

int add(int x,int y=8);
int main()
{
	int x=4;
	cout<<add(x)<<",";
	cout<<add(x,add(add(x,add(x))))<<endl;
}

int add(int x ,int y)
{
 	return x + y;
}