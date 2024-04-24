//data.h
//时间：2024/04/04
//作者：周咏霖
#ifndef DATA_H// 如果DATA_H未定义，则进入下面的代码段
#define DATA_H// 定义DATA_H

class Date
{
public:
    void setYMD(int y, int m, int d);// 设置年月日
    void display();// 显示日期

private:
    int month;// 月份
    int day;// 天
    int year;// 年份
};

#endif// 结束条件，防止重复定义