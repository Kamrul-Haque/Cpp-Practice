#include<iostream>
#include<queue>

using namespace std;

bool m[10][10]={0};
int n=0,e=0;

void bfs(int s)
{
    int aN=0,qF=0;
    queue<int>q;
    bool t[n+1]={0};
    int dist[n+1]={0};

    q.push(s);
    t[s]=1;

    while(!q.empty())
    {
        qF=q.front();
        for(int i=1;i<=n;i++)
        {
            if(m[qF][i])aN=i;
            if(!t[aN])
            {
                dist[aN]=dist[qF]+1;
                t[aN]=1;
                q.push(aN);
            }
        }
        q.pop();
    }
    for(int i=1;i<=n;i++)
    cout<<s<< " to "<<i<< " distance:"<<dist[i]<<endl;
}

int main()
{
    int u=0,v=0;

    cout<< "Insert no. of Nodes & Edges:"<<endl;
    while(cin>>n>>e)
    {
        cout<< "Nodes:"<<endl;
        for(int i=0;i<e;i++)
        {
            cin>>u>>v;
            m[u][v]=1;
            m[v][u]=1;
        }
        bfs(1);
    }
}
