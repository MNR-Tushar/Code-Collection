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
int main()
{
    optimize();

    int n,x;
    cin>>n>>x;// n is number and X is how many times of left shift or right shift


    //left shift
    cout << (n<<x)<<endl;// n*2^x ; so x is power of 2


    //right shift
    cout << (n>>x)<<endl;// (n/2^x); so n divide by 2^x

    return 0;
}
