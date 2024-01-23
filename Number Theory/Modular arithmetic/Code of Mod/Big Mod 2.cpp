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
int bigmod(int a,int b,int m) {
    if(b==0)
        return 1;
    int x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*(a%m))%m;
    return x;
}
int main()
{
    optimize();
    ll n,p,m;
    while(cin>>n>>p>>m)
    {
        ll x=bigmod(n,p,m);
        cout << x<<endl;
    }

    return 0;
}
