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

    //Bubble sort
    //Time Complexity O(n*n)
    
    int n;
    cin>>n;  //Array size;

    int array[n];
    for(int i=0;i<n;i++)
    {
       cin>>array[i];
    }

    for(int i=0;i<n-1;i++) // Outer loop 
    {
       for(int j=0;j<n-i-1;j++) // Inner loop
       {
          if(array[j]>array[j+1])
          {
             swap(array[j],array[j+1]); // Swaping two element.
          }
       }
    }


    //Print
    for(int i=0;i<n;i++)
    {
       cout << array[i]<<" ";
    }
    cout <<endl;

    return 0;


    /*

        Time Complexity Analysis
        ........................
        1st Comparisons (n-1)
        2nd Comparisons (n-2)
        3rd comparisons (n-3)
        .
        .
        .
        N-1th Comparisons 1

        = (n-1)+(n-2)+(n-3)+....2+1
        =(n*(n-1))/2
        so, Time Complexity O(n*n).
    */
}
