#include<iostream>

using namespace std;

int main()
{
    int a[3][3],b[3][3],c[3][3],s=0;

    cout<< "Insert Matrix A:"<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];

    cout<< "Insert Matrix B:"<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>b[i][j];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            s=0;
            for(int k=0;k<3;k++)
            {
                s=s+a[i][k]*b[k][j];
            }
            c[i][j]=s;
        }
    }

    cout<< "Matrix C(AxB):"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<c[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}
