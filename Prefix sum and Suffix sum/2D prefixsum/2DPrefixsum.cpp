#include<bits/stdc++.h>
using namespace std;
#define     ll    long long int
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(4); cout.setf(ios::fixed,ios::floatfield);

const int N=1006;
int a[N][N],prefix[N][N];
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w",stdout);
#endif

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout <<prefix[i][j]<<" ";
        }
        cout <<endl;
    }

    
    

    return 0;  
}
