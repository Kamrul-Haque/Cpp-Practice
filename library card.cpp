#include<iostream>

using namespace std;

class catalog
{
    char t[20],a[20];
    int n;

public:
    void store();
    void show();
};

void catalog::store()
{
    int i;
    cin>>t;
    cin>>a;
    cin>>n;
}
void catalog::show()
{
    cout<<"Title:"<<t<<"\t"<<"Author:"<<a<<"\t"<<"Number of copies:"<<n<<"\n";
}
int main()
{
    catalog b1,b2;

    b1.store();
    b2.store();
    b1.show();
    b2.show();

    return 0;
}
