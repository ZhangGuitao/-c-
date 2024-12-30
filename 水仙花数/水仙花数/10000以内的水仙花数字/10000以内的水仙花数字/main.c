#include<stdio.h>
int main(void)
{
    int num;//控制遍历的变量
    int start_num;//在循环中不断被处理的变量
    int result;//结果
    int remainder;//显然，用做储存
    
    printf("10000以内的水仙花数有：\n");
    for(num=1 ; num<10000 ; num ++)
    {
        start_num=num;
        result = 0;

        while(start_num!=0)
        {
        //取出最后一位数字 并 存放
            remainder=start_num%10;//
            if (num<100)
            {
                result+=remainder * remainder;
            }
            else if(num>=100&&num<=1000)
            {
                result+=remainder * remainder * remainder ;
            }
            else if(num>1000&&num<10000)
            {
                result+=remainder * remainder * remainder *remainder;
            }
            start_num/=10;//将最后一位数字舍弃，继续循环
            //循环结束，即筛选结束
            //将合适的数字即水仙花数输出
            if (result==num)
            {
                printf("%d ",num);
            }
            
        }
    }
    printf("\n");
    return 0;
}
