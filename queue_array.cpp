#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int>q[5];
    int i,j,myint;

    for(i=0;i<3;i++)
    {
        cout<< "Queue"<< i<< ": ";
        for(j=0;j<5;j++)
        {
            cin>> myint;
            q[i].push(myint);
        }
        cout<< endl;
    }
    for(i=0;i<3;i++)
    {
        cout<< "Queue"<< i<< ": ";
        while(!q[i].empty())
        {
            cout<< q[i].front()<< " ";
            q[i].pop();
        }
        cout<< endl;
    }
}

