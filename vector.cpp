#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    int i;

    for(i=0;i<10;i++)v.push_back(i*i);
    cout<< "Size:" <<v.size()<<endl<< "Capacity:" << v.capacity()<<endl<< "Maximum Size:" <<v.max_size()<<endl;
    cout<<"Vector V:";
    for(i=0;i<v.size();i++)cout<< v[i]<< ' ' ;
    cout<<endl;
    v.at(v.front()+3)=10;
    cout<<"Vector V:";
    for(i=0;i<v.size();i++)cout<< v[i]<< ' ' ;
    cout<<endl;
    vector<int>::iterator p=v.begin();
    p+=3;
    v.insert(p,2,100);
    p=v.begin();
    cout<<"Vector V:";
    while(p!=v.end())
    {
        cout<< *p<< ' ' ;
        p++;
    }
    cout<<endl;
    cout<<"Size:";
    cout<<v.size()<<endl;
    for(i=v.size();i>4;i--)v.pop_back();
    cout<<"Vector V:";
    for(i=0;i<v.size();i++)cout<< v[i]<< ' ' ;
    cout<<endl;
    p=v.begin();
    v.erase(p+3);
    p=v.begin();
    cout<<"Vector V:";
    while(v.empty())
    {
        cout<< *p<< ' ' ;
        p++;
    }
    v.clear();
    cout<<endl<< "Size:" <<v.size()<<endl;


    vector<int>c(5,26);
    for(i=0;i<10;i++)v.push_back(i);
    cout<<"Vector V:";
    for(i=0;i<v.size();i++)cout<< v[i]<< ' ' ;
    cout<<endl;
    cout<<"Vector C:";
    for(i=0;i<c.size();i++)cout<< c[i]<< ' ' ;
    cout<<endl;
    v.swap(c);
    cout<<"Vector V:";
    for(i=0;i<v.size();i++)cout<< v[i]<< ' ' ;
    cout<<endl;
    cout<<"Vector C:";
    for(i=0;i<c.size();i++)cout<< c[i]<< ' ' ;
    cout<<endl;


    return 0;
}
