#include<bits/stdc++.h>
using namespace std;
int knapsack(int C, int wt[], int val[], int n){
    int K[n+1][C+1];
    for(int i = 0; i<=n; i++) {
        for(int w = 0; w<=C; w++) {
            if(i == 0 || w == 0) 
            {
                K[i][w] = 0;
            } 
            else if(wt[i-1] <= w)
            {
                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
            } 
            else
            {
              K[i][w] = K[i-1][w];
            }
        }
    }
    return K[n][C];
}
int main(){
        int val[5] = {4, 3, 6, 5};
        int wt[5] = {3, 2, 5, 4};
        int C = 5;
        int len = sizeof val / sizeof val[0];
        printf("Maximum Profit achieved:  %d", knapsack(C, wt, val, len));
}
