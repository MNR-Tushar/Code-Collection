//Please allah help me.
#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int vis[10001];
vector<int>v[10001];
 
int mx,mxnode;
void dfs(int node,int mxv)
{
    vis[node]=1;
    if(mxv>mx)
    {
        mx=mxv;
        mxnode=node;
    }
    for(int child: v[node])
    {
        if(vis[child]==0)
        {
            dfs(child,mxv+1);
        }
    }
}
int main()
{
     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,y,i;
    cin>>n;
    for(i=1;i<=n-1;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1,0);
    mx=-1;
    for(i=1;i<=n;i++)vis[i]=0;
    dfs(mxnode,0);
    cout<<mx<<endl;
    return 0;
}
