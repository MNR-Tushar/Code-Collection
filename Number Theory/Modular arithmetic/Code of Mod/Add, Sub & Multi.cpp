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
    //Modular arithmetic
    // Addition , Sub, Multipication
    //(a+b)%m=((a%m)+(b%m))%m;
    //(a-b)%m=(((a%m)-(b%m))+m)%m;
    //(a*b)%m=((a%m)*(b%m))%m;
    ll mod=1000;

    int n;
    cin>>n;
    //Addition
    ll sum=(n%mod)%mod;
    cout << sum<<endl;

    //Sub
    ll x;
    cin>>x;
    ll sub=((x%mod)+mod)%mod;
    cout << sub <<endl;

    //Multipication with Factorial
    ll fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=((fact%mod)*(i%mod))%mod;
    }
    cout << fact <<endl;



    return 0;
}

