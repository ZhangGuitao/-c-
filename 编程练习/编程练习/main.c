/*13.编写一个程序，提示用户输入3组数，每组数包含5个double类型的数(假设用尸都止确地响应，不会输入非数值数据)。该程序应完成下列任务。
a.把用户输入的数据存储在3×5的数组中
b.计算每组(5个)数据的平均值
c.计算所有数据的平均值
d.找出这15个数据中的最大值
e.打印结果
每个任务都要用单独的函数来完成(使用传统C处理数组的方式)。完成任务b要编写一个计算并返回一维数组平均值的函数，利用循环调用该函数3次。对于处理其他任务的函数，应该把整个数组作为参数，完成任务c和d的函数应把结果返回主调函数。*/
//  main.c
//  编程练习
//
//  Created by 小张621 on 2024/12/26.
//

#include <stdio.h>

void store(double arr[3][5])
{
    printf("请输入三组数据（每组数包含5个double类型的数）：\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}

void group_average(double arr[3][5])
{
    for (int i = 0; i < 3; i++)
    {
        double sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }
        printf("第%d组数据的平均值是：%lf\n", i + 1, sum / 5);
    }
}

double average(double arr[3][5])
{
    double sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum / 15;
}

double max(double arr[3][5])
{
    double max = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main(void)
{
    double arr[3][5];
    store(arr);
    group_average(arr);
    printf("所有数据的平均值是：%.2lf\n", average(arr));
    printf("所有数据的最大值是：%.2lf\n", max(arr));

    return 0;
}
