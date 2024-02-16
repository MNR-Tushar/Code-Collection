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
    
    //Binary Searching.
    //Time Complexity O(log(n)).
    // **Array are must sorted by Ascending or descending order**.
    int n;
    cin>>n; //How many number is size of array.
    int array[n];
    for(int i=0;i<n;i++)
    {
       cin>>array[i];
    }

    int l,r,key,mid,ok=0;
    l=0,r=n; //Here, l is left and r is right.
    cin>>key; //Target vale which i am Searching.

    while(l<=r)
    {
        mid=(l+r)/2; // Array size is dividing by 2 , As long as left is less then of right. 

        if(array[mid]==key)
        {
            cout << "Yes, I found that key . Index is "<<mid<<endl;
            ok=1;
            break;
        }
        else if(array[mid]<key)
        {
            l=mid+1;
        }
        else r=mid-1;
    }

    if(ok==0)cout <<"Not Found"<<endl;
    
    return 0;
}
