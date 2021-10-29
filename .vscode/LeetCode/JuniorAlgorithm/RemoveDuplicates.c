#include <stdio.h>
int dp[6][2];
int maxProfit();
int main(){
    int prices[]={7,1,5,3,6,4};
    int dp[6][2];
    int pricesSize = 6;
    printf("%d",maxProfit(prices,pricesSize));
    return 0;
}

int maxProfit(int* prices, int pricesSize){
    if(pricesSize<2)
        return 0;
    
    dp[0][0]=0;
    dp[0][1]=-prices[0];

    for(int i = 1;i<pricesSize;i++){
        if(dp[i-1][0]>dp[i][1]+prices[i]){
            dp[i][0]=dp[i-1][0];
        }else{
            dp[i][0]=dp[i][1]+prices[i];
        }
        if(dp[i-1][1]>dp[i][0]-prices[i]){
            dp[i][1]=dp[i-1][1];
        }else{
            dp[i][1]=dp[i][0]-prices[i];
        }
    }
    return dp[pricesSize-1][0];
}