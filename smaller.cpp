#include<iostream>
using namespace std;

char sml(char x,char y);
int sml(int x,int y);
double sml(double x,double y);

int main()
{
    cout<< sml( 'a', 'z' )<< "\t";
    cout<< sml(5,7)<< "\t";
    cout<< sml(100.50,200.20)<< "\t";

    return 0;
}
char sml(char x,char y)
{
    return(x<y?x:y);
}
int sml(int x,int y)
{
    return(x<y?x:y);
}
double sml(double x,double y)
{
    return(x<y?x:y);
}
