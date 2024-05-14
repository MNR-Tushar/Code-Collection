//Please allah help me.
#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int t=1;
const int N=200;
int dp[N][N];
int coin[N];
void solve()
{
    int n,w;
    cin>>n>>w;

    for(int i=1;i<=n;i++)
    {
       cin>>coin[i];
    }

    for(int i=1;i<=n;i++)
    {
       for(int j=0;j<=w;j++)
       {
          if(i==1)dp[i][j]=j;
          else if(coin[i]>j)
          {
             dp[i][j]=dp[i-1][j];
          }
          else
          {
             int index=j-coin[i];
             int mn=min(dp[i-1][j],1+dp[i][index]);
             dp[i][j]=mn;
          }
       }
    }

    for(int i=1;i<=n;i++)
    {
       for(int j=0;j<=w;j++)
       {
         cout << dp[i][j]<<" ";
       }
       cout << endl;
    }
    
   
    cout << "Minmum number of coin: "<<dp[n][w]<<endl;
        
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    
    //cin>>t;
    while(t--)
    {
        solve();
    }
    


    return 0;
}
