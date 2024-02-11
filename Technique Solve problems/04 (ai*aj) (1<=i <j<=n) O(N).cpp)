/*
Given an array of n integers, find the sum of ai × aj for all 1 ≤ i<j ≤n.

n   n
∑   ∑  (ai * aj)
i=1 j=1

optimal solution;
here,
So we can write 
a1,a2,a3,a4.....an;
suppose fix ai
ai*(ai+1)+(ai+2)+(ai*3)+.....(ai+n)
ai(ai+1 + ai+2 ai+3+....an);
we know this suffix_sum ;
jodi ai fix kori tahola tarporar sob gula sum ai muliple hosca;

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

    int suffix_sum[n+10];
    suffix_sum[n+1]=0;

    for(int i=n;i>=1;i--)
    {
      suffix_sum[i]=suffix_sum[i+1]+a[i];
    }

    int ans=0;
    for(int i=1;i<=n;i++)
    {
      int sum=0;
      sum=a[i]*suffix_sum[i+1];
      ans+=sum;

    }
    
    cout <<ans<<endl;


    return 0;
}


