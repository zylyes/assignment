//ex2_1.cpp
//时间：2024/03/13
//作者：周咏霖
//编译：PS D:\GitHub\assignment\ex_c++\ex2> g++ .\ex2_1.cpp -o ex2_1.exe
//运行：D:\GitHub\assignment\ex_c++\ex2> .\ex2_1.exe
//输出行1：1/21/2005
//输出行2：3/8/2023
//掌握用类和对象编制基于对象的程序
#include <iostream>
using namespace std;
class Date
{
    public:
        void setYMD(int y,int m,int d);
        void display();
    private:
        int month;
        int day;
        int year;
};
void Date::setYMD(int y,int m,int d)
{
    year=y;
    month=m;
    day=d;
}

void Date::display()
{
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}
int main()
{
    Date d1;
    d1.setYMD(2005,1,21);
    d1.display();

    Date d2;
    d2.setYMD(2023,3,8);
    d2.display();
    return 0;
}