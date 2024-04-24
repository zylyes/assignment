//main.cpp
//时间：2024/04/04
//作者：周咏霖
#include <iostream>// 包含iostream头文件，用于输入输出流
#include "data.h"// 引入自定义的data.h头文件

int main()
{
	// 创建一个Date对象d1并设置日期为2005年1月21日
    Date d1;
    d1.setYMD(2005, 1, 21);
	// 调用display函数展示日期d1
    d1.display();

	// 创建一个Date对象d2并设置日期为2023年3月8日
    Date d2;
    d2.setYMD(2023, 3, 8);
	// 调用display函数展示日期d2
    d2.display();

    return 0;
}
