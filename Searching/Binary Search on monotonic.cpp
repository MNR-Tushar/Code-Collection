/*
   Problem: Given an array a1,a2,....,an(1<=ai<=10^9) of 1<=n<=10^5 intergers and a number 1<=s<=10^14.
                                         n
   Find the largest integer x for which ∑   (ai/x) >= s. If there is no such x, output -1.
                                         i=1
   
*/

#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N =1e5+9;
int a[N],n;
long long s;

bool fun(int x)
{
   long long sum=0;
   for(int i=1;i<=n;i++)
   {
      sum+=a[i]/x;
   }
   return sum>=s;
}
int main()
{
    optimize();

    cin>>n>>s;
    for(int i=1;i<=n;i++)cin>>a[i];

    int l=1,r=1e9,ans=-1;
     while(l<=r)
     {
        int mid=(l+r)/2;

        if(fun(mid))
        {   
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;

     }

     cout <<ans <<endl;

    return 0;
}
