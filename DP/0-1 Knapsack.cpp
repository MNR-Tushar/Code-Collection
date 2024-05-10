//Please allah help me.
#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int t=1;
const int N=200;
int dp[N][N];
int weight[N];
int value[N];
void solve()
{
    int n,c;
    cin>>n>>c;

    for(int i=1;i<=n;i++)
    {
       cin>>weight[i];
    }

    for(int i=1;i<=n;i++)
    {
       cin>>value[i];
    }
    
    for(int i=0;i<=n;i++)
    {
       for(int j=0;j<=c;j++)
       {
          if(i==0 or j==0)
          {
             dp[i][j]=0;
          }
          else if(weight[i]<=j)
          {
             dp[i][j]=max(dp[i-1][j],value[i]+dp[i-1][j-weight[i]]);
          }
          else
          {
             dp[i][j]=dp[i-1][j];
          }
       }
    }

    for(int i=0;i<=n;i++)
    {
       for(int j=0;j<=c;j++)
       {
         cout << dp[i][j]<<" ";
       }
       cout <<endl;
    }

    cout << "Max profit: "<<dp[n][c]<<endl;

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
