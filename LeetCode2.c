You are given an array(prices)where (prices[i]) is the price of a given stock on 1st Day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in future to sell the stock.
Return the maximum profit you can achieve form this transiction.if you cannot achieve any profit then return 0.

Code:
#include<stdio.h>
int main()
{
    int n,i,j,maxprofit=0,profit;
    printf("Enter the number of Prices:");
    scanf("%d",&n);
    int price[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the Prices:");
        scanf("%d",&price[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            profit=price[j]-price[i];
                if(profit>maxprofit)
                {
                    maxprofit=profit;
                }
        }
    }
    printf("The Maximum Profit will be :%d",maxprofit);
    return 0;

}
