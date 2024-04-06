//Please allah help me.
#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int N=1123;
bool visit[N];
vector<int>v[N];
int c=0;
void dfs(int node)
{
    visit[node]=1;
    c++;

    for(auto u:v[node])
    {
        if(visit[u]==0)
        {
            dfs(u);
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
    
    int ans=0,mx=-1;
    for(int i=1;i<=n;i++)
    {
        if(visit[i]==0)
        {
            dfs(i);
            ans=max(ans,c);
            c=0;
        }
    }

    cout << ans <<endl;


    return 0;
}
