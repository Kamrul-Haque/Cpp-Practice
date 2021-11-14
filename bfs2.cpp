#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int node=0,edge=0;
vector<int>v[10];

void bfs(int source)
{
    int activeNode,qFront;
    queue<int>q;
    int taken[10]={0};
    int dist[10]={0};

    dist[source]=0;
    q.push(source);
    taken[source]=1;

    while(!q.empty())
    {
        qFront=q.front();
        for(int i=0;i<v[qFront].size();i++)
        {
            activeNode=v[qFront][i];
            if(!taken[activeNode])
            {
                dist[activeNode]=dist[qFront]+1;
                taken[activeNode]=1;
                q.push(activeNode);
            }
        }
        q.pop();
    }
    for(int i=1;i<=node;i++)
            cout<<source<< " to "<<i<< " distance:"<<dist[i]<<endl;
}

int main()
{
    int s,d;

    cout<<"Enter no. of nodes & edges:"<<endl;

    while(cin>>node>>edge)
    {
        cout<<"Insert nodes:"<<endl;
        for(int i=0;i<edge;i++)
        {
            cin>>s>>d;
            v[s].push_back(d);
            v[d].push_back(s);
        }
        bfs(1);
    }
}
