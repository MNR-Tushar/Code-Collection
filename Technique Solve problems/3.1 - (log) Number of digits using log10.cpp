#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();

    //number of digits
    long long int n;
    cin>>n;

    cout << floor(log10(n))+1<<endl;


    return 0;
}
