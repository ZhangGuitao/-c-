//小张621
//malloc和气泡循环结合

#include <stdio.h>
#include <stdlib.h>

// 交换两个整数的函数
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 冒泡排序升序函数
void bubbleSortAscending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++)//对整体进行数据遍历
    {
        int cnt=0;
        for (int j = 0; j < n - i - 1; j++)//随着轮数的增加，每次比较的数字减少
        {
            if (arr[j] > arr[j + 1])
            {
                cnt=1;
                swap(&arr[j], &arr[j + 1]);//将较大的数字放在末尾
            }
        }
        if(cnt==0)
        {
            break;//优化核心
        }
    }
}

// 冒泡排序降序函数
void bubbleSortDescending(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)//遍历
    {
        for (int j = 0; j < n - i - 1; j++)//随着轮数的增加 每次比较的数字减少
        {
            if (arr[j] < arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);//将较小的数字放在末尾
            }
        }
    }
}

int main(void)
{
    int n;
    printf("请输入数组的长度: ");
    scanf("%d", &n);

    // 使用malloc动态分配内存来创建数组
    int *arr = (int *)malloc(n * sizeof(int));//经典的定义*arr并分配内存
    //*arr即可当作数组arr[]使用
    if (arr == NULL)
    {
        printf("内存分配失败！\n");
        return 1;
    }

    // 输入数组元素
    printf("请依次输入 %d 个整数: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);//将读取的正数动态储存到数组arr[]中 村村的位置通过arr[i]来表示
    }

    // 进行升序排序
    int *arrAsc = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arrAsc[i] = arr[i];//将arr[]整体赋值到arrasc[]中 方便再次使用arr[]进行降序排列
    }
   
    bubbleSortAscending(arrAsc, n);
    printf("升序排序后的数组: ");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrAsc[i]);//对排列完毕的数组进行输出
    }
    printf("\n");

    // 进行降序排序
    int *arrDesc = (int *)malloc(n * sizeof(int));
    
    
    for (int i = 0; i < n; i++)
    {
        arrDesc[i] = arr[i];
    }
    bubbleSortDescending(arrDesc, n);
   
    printf("降序排序后的数组: ");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrDesc[i]);
    }
    printf("\n");

    // 释放动态分配的内存
    free(arr);
    free(arrAsc);
    free(arrDesc);

    return 0;
}




