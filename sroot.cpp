#include<iostream>
#include<cmath>
using namespace std;

int sroot(int a);
long sroot(long a);
double sroot(double a);

int main()
{
    cout<< sroot(64)<<"\t";
    cout<< sroot(565681)<<"\t";
    cout<< sroot(10.10);

    return 0;
}
int sroot(int a)
{
    return sqrt(a);
}
long sroot(long a)
{
    return sqrt(a);
}
double sroot(double a)
{
    return sqrt(a);
}
