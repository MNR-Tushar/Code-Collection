#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();

    int n;
    cin>>n;

    double count=0;

    for(int i=1;i<=n;i++)
    {
        count+=log10(i);
    }

    cout <<floor(count)+1<<endl;


    return 0;
}
