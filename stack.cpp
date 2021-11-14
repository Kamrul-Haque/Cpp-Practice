#include<iostream>
using namespace std;

class stk
{
    char s[20];
    int t=0;
public:
    void push(char c);
    char pop();
};
void stk::push(char c)
{
    if(t==20)
    {
        cout<<"Overflow";
        return;
    }
    s[t]=c;
    t++;
}
char stk::pop()
{
    if(t==0)
    {
        cout<<"Underflow";
        return 0;
    }
    t--;
    return s[t];
}

int main()
{
    stk s1,s2;
    int i;

    s1.push('a');
    s1.push('b');
    s1.push('c');
    s2.push('x');
    s2.push('y');
    s2.push('z');

    for(i=0;i<3;i++)cout << "s1:" << s1.pop() << "\n";
    for(i=0;i<3;i++)cout << "s2:" << s2.pop() << "\n";

    return 0;
}
