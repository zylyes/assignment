//data.cpp
//时间：2024/04/04
//作者：周咏霖
#include <iostream>  // 包含输入输出流的头文件
#include "data.h"  // 包含自定义的data.h头文件

void Date::setYMD(int y, int m, int d)
{
	year = y;  // 将参数y赋值给年份year
	month = m;  // 将参数m赋值给月份month
	day = d;  // 将参数d赋值给日期day
}

void Date::display()
{
	std::cout << month << "/" << day << "/" << year << std::endl;  // 输出月/日/年的格式
}