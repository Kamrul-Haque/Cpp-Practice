#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int elem;
    vector <int> sh;
    for(int i = 0;i <= 10;i++)
    {
        cin>>elem;
        sh.push_back(elem);
    }
    vector <int>::iterator an;
    for(an = sh.begin();an != sh.end();an++)
    {
        cout<<*an<< ' ' ;
    }
    return 0;
}
