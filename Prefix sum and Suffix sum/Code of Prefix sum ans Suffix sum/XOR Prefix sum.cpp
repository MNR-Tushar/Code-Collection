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
const int mod=1000000007;
int main()
{
    int n,m;
    cin>>n>>m;

    int ar[n+1];

    for(int i=1;i<=n;i++)cin>>ar[i];

    int prefix_sum[n+1];
    prefix_sum[0]=0;

    for(int i=1;i<=n;i++)
    {
       prefix_sum[i]=prefix_sum[i-1]^ar[i];
    }
    while(m--)
    {
       int r,l;
       cin>>l>>r;

       cout << (prefix_sum[r]^prefix_sum[l-1])<<endl;
    }



    return 0;
}
