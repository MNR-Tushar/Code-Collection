//Please allah help me.
#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int t;
const int N=1e2;
vector<int>v[N];
int dis[N],vis[N];
void bfs(int node)
{
    queue<int>q;
    q.push(node);
    vis[node]=1;

    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        for(int child:v[cur])
        {
            if(vis[child]==0)
            {
                dis[child]=dis[cur]+1;
                vis[child]=1;
                q.push(child);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    
    int n,e,x,y;
    cin>>n>>e;

    while(e--)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bfs(1);

    for(int i=1;i<=n;i++)
    {
        cout << "Distance of node "<< i << " = "<<dis[i]<<endl;
    }

    return 0;
}
