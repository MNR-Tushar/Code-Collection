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
int check_bit_on_off(int n, int k)
{
    //last bit check n&1
    //kth bit check ((n>>k)&1)
    return ((n>>k)&1);
}
void count_on_bits(int n)
{
    int c=0;
    for(int i=0;i<32;i++)
    {
        if(check_bit_on_off(n,i))
        {
            c++;
        }
    }
    cout<< c <<endl;
}
int main()
{
    optimize();

    //How to find the number of on bits in a number?
    
    int n;
    cin>>n;

    count_on_bits(n);


    return 0;
}
