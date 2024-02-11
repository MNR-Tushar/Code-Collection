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
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];

    int prefix_sum[n+1];
    prefix_sum[0]=0;

    for(int i=1;i<=n;i++)
    {
       prefix_sum[i]=prefix_sum[i-1]+ar[i];
    }

    for(int i=1;i<=n;i++)
    {
      cout <<prefix_sum[i]<<" ";
    }
    cout <<endl;


    return 0;
}
