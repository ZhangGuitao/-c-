//
//  main.c
//  买卖股票最大盈利
//
//  Created by 小张621 on 2024/12/7.
//
/*
 给定一个数组 prices ，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。
你只能选择 某一天 买入这只股票，并选择在 未来的某一个不同的日子 卖出该股票。设计一个算法来计算你所能获取的最大利润。
返回你可以从这笔交易中获取的最大利润。如果你不能获取任何利润，返回 0 。
 */
#include <stdio.h>
int maxProfit( int prices[],int pricesSize)
{
    int min_price=prices[0];
    int max_profit=0;
    for(int i=0 ; i< pricesSize ; i++)
    {
        if (prices[i]<min_price)
        {
            min_price=prices[i];
        }
        else
        {
            int profit=prices[i]-min_price;
            if (profit  > max_profit)
            {
                max_profit=profit;
            }
        }
    }
      return max_profit;
}
int main (void)
{
    int prices[]={1,2,3,56,12,46,13,54};
    int num=sizeof(prices)/sizeof prices[0];
    
    int profit=maxProfit(prices,num);
    
    printf("这股股票的最大盈利为：%d\n",profit);
    return profit;
}
