#include<iostream>
using namespace std;

int main()
{
    int i,x,y;

    cin>>x>>y;

    int p=x;

    for(i=1;i<y;i++)
        p=p*x;
    cout<<p;

    return 0;
}
