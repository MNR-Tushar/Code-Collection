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
    // Octal to Decimal

    int n;
    cin>>n;
    int rem=0,dec=0,i=0;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        dec+=rem*pow(8,i);
        i++;
    }
    cout << dec <<endl;
    



    return 0;
}
