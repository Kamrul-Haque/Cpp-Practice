#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int node=0,edge=0;
vector<int>v[10];

bfs(int source)
{
    queue<int>q;
    taken[10]={0};
    dist[10]={0};



    taken[source]=1;

    while(!q.empty())
}

int main()
{
    int u,v;

    cout<<"Enter no. of nodes & edges:"<<endl;

    while(cin>>node>>edge)
    {
        cout<<"Insert nodes:"<<endl;
        for(int i=0;i<edge;i++)
        {
            cin>>u>>v;
            v[u].push_back(v);
            v[v].push_back(u);
        }
        bfs(1);
    }
}
