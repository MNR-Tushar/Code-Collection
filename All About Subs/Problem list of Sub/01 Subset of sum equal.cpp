
/*
      Problem: You are given n<=20 numbers, each from 1 up 10^8. 
      Is there a subset with a sum equal to a given goal s where 1<=s <=10^9 ?
      Output "Yes" or "No".

*/
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
    int n,s,c=0;
    cin>>n>>s; //array size and s means sum of any subset

    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];

    for(int mask=0;mask<(1<<n);mask++)
    {
       long long int sum=0;
       for(int i=0;i<n;i++)
       {
          if((mask>>i)&1)
          {

            sum+=ar[i];
          }
       }
       if(s==sum)
       {
         c=1;
         break;
       }

    }
    if(c)cout <<"Yes"<<endl;
    else cout << "No"<<endl;

    //Time complexity O(n*2^n);
    // Total Subset 2^n;


    return 0;
}
