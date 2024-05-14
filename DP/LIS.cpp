//Please allah help me.
#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int N=1e5+123;
vector<int>v(N);
int dp[N];
int lis(int i)
{
    if(dp[i]!=-1)return dp[i];
    int ans=1;
    for(int j=0;j<i;j++)
    {
       if(v[i]>v[j])
       {
          ans=max(ans,lis(j)+1);
       }
    }

    return dp[i]=ans;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

   memset(dp,-1,sizeof(dp));
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
     cin>>v[i];
   }

   int ans=0;
   for(int i=0;i<n;i++)
   {
      ans=max(ans,lis(i));
   }

   cout << ans<<endl;


    return 0;
}
//O(N^2);
