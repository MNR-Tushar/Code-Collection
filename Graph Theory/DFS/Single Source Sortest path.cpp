//Please allah help me.
#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int N=1123;
bool visit[N];
vector<int>v[N];
int dis[N];

void dfs(int node,int d)
{
    visit[node]=1;
    dis[node]=d;

    for(auto u:v[node])
    {
        if(visit[u]==0)
        {
            dfs(u,d+1);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,e;
    cin>>n>>e;
    while(e--)
    {
         int x,y;
         cin>>x>>y;
         v[x].push_back(y);
         v[y].push_back(x);
    }

    dfs(1,0);
    
    for(int i=1;i<=n;i++)
    {
        cout << i <<" "<< dis[i]<<endl;
    }


    return 0;
}
