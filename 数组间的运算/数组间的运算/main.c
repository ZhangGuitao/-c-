//15.编写一个函数，把两个数组中相对应的元素相加，然后把结果存储到第3个数组中。也就是说，如果数组1中包含的值是2、4、5、8,数组2中包含的值是1、0、4、6,那么该函数把3、4、9、14赋给第3个数组。函数接受3个数组名和一个数组大小。在一个简单的程序中测试该函数
//  main.c
//  数组间的运算
//
//  Created by 小张621 on 2024/12/26.
//

#include <stdio.h>
#include<stdlib.h>
void f(int *a1, int* a2,int *result,int n)
{
    for(int i=0;i<n; i++)
    {
        result[i]=a1[i]+a2[i];
    }
}

int main(int argc, const char * argv[])
{
    int n=0;
    printf("请输入数组长度：");
    scanf("%d",&n);
    int *a1=(int *)malloc(n*sizeof(int));
    int *a2=(int *)malloc(n*sizeof(int));
    int *result=(int *)malloc(n*sizeof(int));
    if(a1==NULL||a2==NULL||result==NULL)
    {
        printf("内存分配失败\n");
        return 1;
    }
    printf("请输入第一个数组的元素：");
    
    for(int i=0;i<n; i++)
    {
        scanf("%d",&a1[i]);
    }
    
    printf("请输入第二个数组的元素：");
    
    for(int i=0;i<n; i++)
    {
        scanf("%d",&a2[i]);
    }
    free(a1);
    free(a2);
    free(result);
    
    return 0;
}
