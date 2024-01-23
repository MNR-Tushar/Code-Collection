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
    // Decimal to octal;

    int n;
    cin>>n;
    int x=0;
    while(n!=0)
    {
        x=x*10+(n%8);
        n/=8;
    }
    //reverse of x
    int oct=0;
    while(x!=0)
    {
        oct=oct*10+(x%10);
        x/=10;
    }
    
    cout <<oct<<endl;


    return 0;
}
