//  TOMORROW DAY
//  main.c
//  Tomorrow Days
//
//  Created by 小张621 on 2024/12/22.

#include<stdio.h>
#include<stdbool.h>//bool类型.

struct date
{
    int month;
    int day;
    int year;
};

bool isLeap(struct date d);//函数声明
int numofDays(struct date d);//函数声明

int main(int argc,char const *argv[])
{
    struct date today,tomorrow;
    printf("Enter Todays date(mm dd yyyy): ");
    scanf("%d %d %d",&today.month,&today.day, &today.year);
    
    if(today.day!=numofDays(today))
    {
        tomorrow.day=today.day+1;
        tomorrow.month=today.month;
        tomorrow.year=today.year;
    }
    else if (today.month==12)
    {
        tomorrow.day=1;
        tomorrow.month=1;
        tomorrow.year=today.year+1;
    }
    else
    {
        tomorrow.day=1;
        tomorrow.month=today.month;
        tomorrow.year=today.year;
    }
    
    printf("Tomorrow's date is %d-%d-%d\n",tomorrow.month,tomorrow.day,tomorrow.year);
    return 0;
}

int numofDays(struct date d)
{
    int days;
    int daysPerMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    if(d.month==2&&isLeap(d))
        days=29;
    else
        days=daysPerMonth[d.month-1];
    
    return days;//单一出口
}


bool isLeap(struct date d)
{
    bool leap=false;
    if((d.year%4==0&&d.year%100==0)||d.year%400==0)
        leap=true;
    
    return leap;
}
