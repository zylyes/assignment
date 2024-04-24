#include <iostream>
using namespace std;

const int v=4;const int m=7;
const int*pv2=&v;
const int*const pv4=&v;

int main()
{
    pv2=&m;
    *pv2=m;

    pv4=&m;
    *pv4=m;
}
