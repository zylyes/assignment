#include <iostream>
using namespace std;

int v=4;const int m=7;
int*pv=&v;
const int*pv2=&v;
int*const pv3=&v;
const int*const pv4=&v;

int main()
{
    pv=&m;
    *pv=m;

    pv2=&m;
    *pv2=m;

    pv3=&m;
    *pv3=m;

    pv4=&m;
    *pv4=m;
}