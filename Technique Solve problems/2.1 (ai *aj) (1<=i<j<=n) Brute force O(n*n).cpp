
/*
Given an array of n integers, find the sum of ai × aj for all 1 ≤ i<j ≤n.

n   n
∑   ∑  (ai * aj)
j=1 i=1

*/
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
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];

    int ans=0;

    for(int i=1;i<=n;i++)
    {
      int sum=0;
       for(int j=i+1;j<=n;j++)
       {
          sum+=a[i]*a[j];
       }

       ans+=sum;

    }
    
    cout <<ans<<endl;


    return 0;
}
