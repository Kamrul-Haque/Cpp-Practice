#include<iostream>
using namespace std;

class na
{
    char n[20],a[80];
public:
    void store();
    void display();
};
int main()
{
    na p1,p2;

    p1.store();
    p2.store();
    p1.display();
    p2.display();

    return 0;
}
void na::store()
{
    cout<< "Enter name:";
    cin>> n;
    cout<< "Enter address:";
    cin>> a;
}
void na::display()
{
    cout<< n<< '\t'<< a<< '\n';
}
