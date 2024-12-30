//编写一个函数，返回储存在int类型数组的最大值，并在简单的程序中测试该函数
//  main.c
//  指针类练习
//
//  Created by 小张621 on 2024/12/26.
//
#include<stdlib.h>
#include <stdio.h>

int findmax(int arr[], int n)
{
    int max=arr[0];
    for(int i=0; i<n; i++)
    {
        if (max<arr[i])
            max=arr[i];
    }
    return max;
}

int main(int argc, const char * argv[]) {
    int n=0;
    int *arr;
    
    printf("请输入数组的大小：");
    scanf("%d",&n);
    
    //用malloc动态分配内存
    arr=(int *)malloc(n* sizeof (int));
    if(arr==NULL)
    {
        printf("内存分配失败\n");
        return 1;
    }
    
    printf("请输入数组中的值：");
    for (int i=0; i<n;i++)
    {
        printf("请输入a[%d]:\n",i);
        scanf("%d",&arr[i]);
    }
    
    int max=findmax(arr,n);
    
    printf("数组中最大的数字是：%d\n",max);
    
    free(arr);
    return 0;
}
