#include<iostream>
using namespace std;

inline int abs(int a)
{
    return a>0 ? a : -a;
}
inline long abs(long a)
{
    return a>0 ? a : -a;
}
inline double abs(double a)
{
    return a>0 ? a : -a;
}
int main()
{
    cout<< abs(-3) <<endl;
    cout<< abs(-10L) <<endl;
    cout<< abs(-3.14159) <<endl;

    return 0;
}
