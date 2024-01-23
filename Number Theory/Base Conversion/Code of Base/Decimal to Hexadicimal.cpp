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
    // Decimal to Hexadecimal;
    string s1="0123456789ABCDEF";
    int n;
    cin>>n;
    string s;
    while(n!=0)
    {
        int x=n%16;

        s+=s1[x];
        n/=16;
    }
    //reverse of s
    reverse(s.begin(),s.end());

    cout <<s<<endl;


    return 0;
}
