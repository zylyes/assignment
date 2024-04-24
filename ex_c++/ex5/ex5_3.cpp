//ex5_3.cpp
//时间：2024/04/03
//作者：周咏霖
//编译：PS D:\GitHub\assignment\ex_c++\ex5> g++ .\ex5_3.cpp -o ex5_3.exe
//运行：D:\GitHub\assignment\ex_c++\ex5> .\ex5_3.exe
//输出：Bicycle weight: 50, height: 0
//1-start  2-add passenger  3-Someone gets off the bus  4-stop  0-end program.
//1-start
//Motorcar status: running, passengers: 1
//1-start  2-add passenger  3-Someone gets off the bus  4-stop  0-end program.
//2-add passenger
//The vehicle is running, please stop car, then add passenger!
//Motorcar status: running, passengers: 1
//1-start  2-add passenger  3-Someone gets off the bus  4-stop  0-end program.
//3-Someone gets off the bus      The vehicle is running, please stop car, then add passenger!
//Motorcar status: running, passengers: 1
//1-start  2-add passenger  3-Someone gets off the bus  4-stop  0-end program.
//4-stop  Motorcar status: rest, passengers: 1
//1-start  2-add passenger  3-Someone gets off the bus  4-stop  0-end program.
//Motorcar status: rest, passengers: 1

//通过键盘输入不同的数字来控制机动车的行为
//包括启动（1-start）、搭载乘客（2-add passenger）、乘客下车（3-Someone gets off the bus）、停车（4-stop）和结束程序（0-end program）。
//根据输入的不同，调用相应的方法来控制机动车的行为，并显示当前的运行状态和乘客数量。
//实现了车辆类及其子类的行为控制和信息显示功能。

#include <iostream>
#include <conio.h> // _getch()返回键盘上读取的字符,应包含头文件<conio.h>
using namespace std;

enum VehicleStaus { rest, running };  //车辆状态：泊车、行进
//定义两个类：Vehicle（车辆）和它的子类Bicycle（自行车）和Motorcar（机动车）

//车辆类
//Vehicle类具有车辆的基本属性和行为，包括车重和状态（泊车或行进），以及启动和停止方法。
class Vehicle {
public:
    Vehicle(int w); //构造函数，初始时，当前速度总为0且处在停车状态
    void start();  //由rest状态到running, 初速为1
    void stop(); //由running状态到rest
protected:
    int weight;             //车重
    VehicleStaus status; //rest-泊车状态；running-行进状态
};

//构造函数，初始时，处在停车状态
Vehicle::Vehicle(int w) : weight(w), status(rest) {}

//启动：由rest状态到running
void Vehicle::start()
{
    if (status == rest)
    {
        status = running;
    }
    else
        cout << "vehicle is running!" << endl;
}

//由running状态到rest
void Vehicle::stop()
{
    if (status == running)
    {
        status = rest;
    }
    else
        cout << "The vehicle has been rest." << endl;
}

//Bicycle类继承自Vehicle类，分别表示自行车，拥有自行车的属性和行为。
class Bicycle : public Vehicle //自行车类
{
public:
    Bicycle(int w = 50, double h = 0.7) :Vehicle(w), height(h) {}//定义构造函数
    //1.编写show()成员函数，显示自行车的车重、车高
    void show() 
    {
        cout << "Bicycle weight: " << weight << ", height: " << height << endl;
    }

protected:
    double height; //车高
};

//Motorcar类继承自Vehicle类，表示机动车，拥有机动车的属性和行为。
class Motorcar : public Vehicle//机动车类
{
public:
    //定义构造函数
    Motorcar(int w = 1500, int p = 1) : Vehicle(w), passengerNum(p) {}
    void addPassenger(int p = 1);   //搭载乘客，超员要拒载，有人下车时，p为负数。当然车上乘客至少有1个（司机）。上下车时，要先停车。
    void show(); //显示机动车的运行状态和当前乘客数量。
protected:
    int passengerNum; //乘客人数
};

//搭载乘客，上车p>0，下车p<0
void Motorcar::addPassenger(int p)
{
    if (status == running)
    {
        cout << "The vehicle is running, please stop car, then add passenger!" << endl;
    }
    else
    {
        if (passengerNum + p >= 1)
        {
            passengerNum += p;
        }
        else
        {
            cout << "Cannot have less than 1 passenger!" << endl;
        }
    }
}

//2.编写show()成员函数，显示机动车的运行状态和当前乘客数量。
void Motorcar::show()
{
    cout << "Motorcar status: " << (status == rest ? "rest" : "running") << ", passengers: " << passengerNum << endl;
}

//创建了一个Bicycle对象b和一个Motorcar对象m。
int main ()
{
    Bicycle b;
    b.show();

    Motorcar m;
    bool end = false;
    while (!end)
    {
        cout << "1-start  2-add passenger  3-Someone gets off the bus  4-stop  0-end program." << endl;
        char keydown = _getch(); //_getch()返回键盘上读取的字符,应包含头文件<conio.h>
        switch (keydown)
        {
            case '1':
                cout << "1-start\t" << endl;
                m.start();
                break;
            case '2':
                cout << "2-add passenger\t" <<endl;
                m.addPassenger(1);
                break;
            case '3':
                cout << "3-Someone gets off the bus\t";
                m.addPassenger(-1);
                break;
            case '4':
                cout << "4-stop\t";
                m.stop();
                break;
            case '0':
                end = true;
                break;
        }
        m.show();
    }
    return 0;
}




