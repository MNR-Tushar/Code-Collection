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
int turn_off_bits(int n,int k)
{
    //kth position bits off and n AND with NOT left shift 
    return ~(1<<k)&n;
}
int main()
{
    optimize();
    int n,k;
    cin>>n>>k;
    //How to turn off a bit in a number?


    cout << turn_off_bits(n,k)<<endl; 


    return 0;
}
