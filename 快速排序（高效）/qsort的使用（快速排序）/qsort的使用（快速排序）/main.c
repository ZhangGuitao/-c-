//
//  main.c
//  qsort的使用（快速排序）
//
//  Created by 小张621 on 2024/12/27.
//

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int com_sheng(const void *a,const void*b)
{
    return(*(int*)a-*(int*)b);
}

int com_jiang(const void *a,const void*b)
{
    return(*(int*)b-*(int*)a);
}
void print_start(int arr[], int n)
{
    printf("原始的数据是：");
    for(int i=0; i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void print_end(int arr[], int n)
{
    printf("排序后数据是：");
    for(int i=0; i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[])
{
    time_t now=time(NULL);
    printf("程序开始时间：%s",ctime(&now));
    printf("当前用户：小张\n\n");
    printf("请输入排序元素个数:");
    int n=0;
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("内存分配失败！\n");
        return 1;
    }
    
    for(int i=0; i<n;i++)
    {
        printf("请输入第%d个元素：",i+1);
        scanf("%d",&arr[i]);
    }
        printf("\n");
        int p=0;
        printf("请输入您的排序方式（输入序号）：\n1.升序排序\n2.降序排序\n");
        scanf("%d",&p);
        if(p==1)
            qsort(arr,n,sizeof(int),com_sheng);
        else if(p==2)
            qsort(arr,n,sizeof(int),com_jiang);
        
    print_start(arr,n);
    print_end(arr,n);
    
    free(arr);
    
    return 0;
}
