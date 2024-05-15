//Please allah help me.
#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int N=1000;

vector<int>v[N];
int vist[10000],col[10000];

bool dfs(int node,int c)
{
    vist[node]=1;
    col[node]=c;
    
    
    for(auto child:v[node])
    {
        if(vist[child]==0)
        {   
            if(dfs(child,c^1)==false)return false;  
        }
        else{

            if(col[node]==col[child])return false;
        }
    }
    return true;
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
    bool ans=dfs(1,1);

    if(ans==true)cout << "Bipartite"<<endl;
    else cout << "Not Bipartite"<<endl;

    return 0;
}
