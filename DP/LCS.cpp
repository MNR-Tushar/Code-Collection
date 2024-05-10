//Please allah help me.
#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int t=1;
const int N=200;
int dp[N][N];
void solve()
{
    string s,s1;
    cin>>s>>s1;

    int r=s.size();
    int c=s1.size();

    vector<char>v;
    for(int i=1;i<r+1;i++)
    {
      for(int j=1;j<c+1;j++)
      {
         if(s[i-1]==s1[j-1])
         {
            dp[i][j]=dp[i-1][j-1]+1;
         }
         else if(dp[i-1][j]>=dp[i][j-1])
         {
           dp[i][j]=dp[i-1][j];
         }
         else
         {
            dp[i][j]=dp[i][j-1];
         }
      }
    }


    for(int i=0;i<=r;i++)
    {
       for(int j=0;j<=c;j++)
       {
         cout << dp[i][j]<<" ";
       }
       cout << endl;
    }
    

    

    

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
