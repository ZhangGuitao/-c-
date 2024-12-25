#include <stdio.h>
#include <stdlib.h>

// 冒泡排序函数
void bubbleSort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int *arr;
    int i;

    // 使用malloc动态分配内存
    arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL) {
        printf("内存分配失败！\n");
        return 1;
    }

    // 用户输入数组元素
    printf("请输入10个整数：\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 调用冒泡排序函数
    bubbleSort(arr, 10);

    // 输出排序后的数组
    printf("排序后的数组：\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}

