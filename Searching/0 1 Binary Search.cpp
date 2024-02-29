/*
    Problem: Given a sorted array a of n integers where each element is either 0 or 1.
    Find the index of the first 1 in the array. If there is no 1 present  in the array, output -1.
*/
#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n;
    cin>>n;
    int a[n+1];

    for(int i=0;i<n;i++)cin>>a[i];

    int l=0,r=n-1,ans=-1;


     while(l<=r)
     {
        int mid=(l+r)/2;

        if(a[mid]==1)
        {   
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;

     }

     cout <<ans <<endl;

    return 0;
}
