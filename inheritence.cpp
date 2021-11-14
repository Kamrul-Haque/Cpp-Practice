#include<iostream>
using namespace std;

class area_cl
{
public:
    double height;
    double width;
};
class rectangle:public area_cl
{
public:
    rectangle(double h,double w);
    double area();
};
class isosceles:public area_cl
{
public:
    isosceles(double h,double w);
    double area();
};
rectangle::rectangle(double h,double w)
{
    height=h;
    width=w;
}
double rectangle::area()
{
    return height*width;
}
isosceles::isosceles(double h,double w)
{
    height=h;
    width=w;
}
double isosceles::area()
{
    return 0.5*height*width;
}
int main()
{
    rectangle r1(10.5,5.25);
    isosceles i1(7.5,5.0);

    cout<< "Area of rectangle:"<< r1.area()<< "\n" ;
    cout<< "Area of isosceles:"<< i1.area()<< "\n" ;

    return 0;
}
