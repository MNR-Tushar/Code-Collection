//https://cses.fi/problemset/task/1643/
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
    for(int i=0;i<n;i++)cin>>ar[i];

    ll mx=-1e18,sum=-1e18;

    for(int i=0;i<n;i++)
    {
        sum=max((ll)ar[i],ar[i]+sum);
        mx=max(mx,sum);
    }

    cout <<mx<<endl;


    return 0;
}
