//字符串函数的使用
//  main.c
//  months
//
//  Created by 小张621 on 2024/12/3.
//

#include<stdio.h>
int main(void)
{
    printf("请输入月份：");
    int month;
    scanf("%d", &month);

    char *months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };//字符串函数

    if (month >= 1 && month <= 12)
    {
        printf("对应的英文是：");
        
        printf("%s\n", months[month - 1]);
    }
    else
    {
        printf("请输入正确的月份!1\n");
    }

    return 0;
}
