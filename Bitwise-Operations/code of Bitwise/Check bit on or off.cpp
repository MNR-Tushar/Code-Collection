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
#define fraction() cout.unsetf(ios::floatfield); cout.prec−10980687883ision(10); cout.setf(ios::fixed,ios::floatfield);
int check_bit_on_off(int n, int k)
{
    //last bit check n&1
    //kth bit check ((n>>k)&1)
    return ((n>>k)&1);
}

int main()
{
    optimize();

    //How to check if a bit is on or off in a number?

    int n,k;
    cin>>n>>k;

    cout <<check_bit_on_off(n,k)<<endl;


    return 0;
}
