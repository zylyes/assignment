//ex4_1.cpp
//时间：2024/03/27
//作者：周咏霖
//编译：PS D:\GitHub\assignment\ex_c++\ex4> g++ .\ex4_1.cpp -o ex4_1.exe
//运行：D:\GitHub\assignment\ex_c++\ex4> .\ex4_1.exe
//输出：operator+=
//     16.1+10.1i
//     operator+
//     28.9+15.4i
//采用自由函数和成员函数将运算符（+/+=）成对重载。
#include <iostream>
using namespace std;
class Complex //定义Complex类
{
public:
    //构造函数
    Complex(float x=0,float y=0)
    {
        real=x;
        imag=y;
    }

    //复数加等函数
    Complex& operator+=(Complex &c2)
    {
        real=real+c2.real;//实部加等
        imag=imag+c2.imag;//虚部加等
        return *this;//返回结果
    }

    // 打印本复数
    void display()
    {
        cout<<real<<'+'<<imag<<'i'<<endl;
    }
private:
    float real;//实部
    float imag;//虚部
};

//复数相加函数
    Complex operator+(Complex &ihs,Complex &rhs)
    {
        return Complex(ihs)+=rhs;//返回结果
    }

int main()
{
    Complex complex1(3.3f, 4.8f), complex2(12.8f,5.3f);//定义两个复数
    complex1 += complex2;//进行复数加等

    cout<<"operator+="<<endl;

    complex1.display();//输出结果

    Complex complex3;//定义一个复数
    complex3=complex1 + complex2;// 进行两个复数的加运算

    cout<<"operator+"<<endl;

    complex3.display();//输出结果

    return 0;
}