/*
      https://codeforces.com/problemset/problem/550/B

*/
#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define     all(v)          v.begin(),v.end()
#define     Max             1000000000000000014
#define     Min             -1000000000000000014
#define     pb              push_back
#define     PI              3.1415926535897
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,s,c=0,l,r;
    cin>>n>>l>>r>>s; //array size and s means sum of any subset

    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];

    for(int mask=0;mask<(1<<n);mask++)
    {
       int sum=0,mn=1e9,mx=-1;
       for(int i=0;i<n;i++)
       {
          if((mask>>i)&1)
          {

            sum+=ar[i];
            mn=min(mn,ar[i]);
            mx=max(mx,ar[i]);
          }
       }
       if((sum>=l && sum<=r) && (mx-mn)>=s)
       {
         c++;
       }

    }
    cout <<c <<endl;

    //Time complexity O(n*2^n);
    // Total Subset 2^n;


    return 0;
}
