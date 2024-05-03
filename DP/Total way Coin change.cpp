//Please allah help me.
#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int dp[200][200];
int coin[200];
int main()
{
    

     dp[0][0]=1;
    int n,w;
    //printf("how many coin you have: ");
    scanf("%d", &n);
    //printf("Enter change: ");
    scanf("%d", &w);
 
    for(int i=1;i<=n;i++)
    {
         scanf("%d", &coin[i]);
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {                                            
           if(coin[i]>j)
           {
              dp[i][j]=dp[i-1][j];
           }

           else
           {
             int x=j-coin[i];
             dp[i][j]=dp[i-1][j]+dp[i][x];
           }

        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }

    printf("Total ways : %d\n",dp[n][w]);

    return 0;
}
