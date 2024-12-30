#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<limits.h>

// 交换两个整数的函数
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 比较函数类型定义
typedef int (*CompareFunc)(int, int);

// 升序比较函数
int compareAscending(int a, int b) {
    return a > b;
}

// 降序比较函数
int compareDescending(int a, int b) {
    return a < b;
}

// 统一的冒泡排序函数
void bubbleSort(int *arr, int n, CompareFunc compare) {
    if (arr == NULL || n <= 0) {
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        int hasSwapped = 0;  // 优化标志
        for (int j = 0; j < n - i - 1; j++) {
            if (compare(arr[j], arr[j + 1])) {
                swap(&arr[j], &arr[j + 1]);
                hasSwapped = 1;
            }
        }
        // 如果没有交换发生，说明数组已经有序
        if (!hasSwapped) {
            break;
        }
    }
}

// 打印数组函数
void printArray(const int *arr, int n, const char *message) {
    if (arr == NULL || n <= 0) {
        return;
    }
    printf("%s", message);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 复制数组函数
int* copyArray(const int *source, int n) {
    if (source == NULL || n <= 0) {
        return NULL;
    }
    int *dest = (int *)malloc(n * sizeof(int));
    if (dest == NULL) {
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        dest[i] = source[i];
    }
    return dest;
}

// 验证输入函数
int getValidInput(const char *prompt, int min, int max) {
    int input;
    int validInput;
    do {
        printf("%s", prompt);
        validInput = scanf("%d", &input);
        // 清除输入缓冲区
        while (getchar() != '\n');
        
        if (!validInput) {
            printf("错误：请输入一个有效的整数！\n");
            continue;
        }
        if (input < min || input > max) {
            printf("错误：请输入一个在 %d 到 %d 之间的数！\n", min, max);
            continue;
        }
        break;
    } while (1);
    return input;
}

int main(void) {
    // 获取当前时间并打印
    time_t now = time(NULL);
    printf("程序开始时间: %s", ctime(&now));
    printf("欢迎使用排序程序，%s!\n\n", "小张");

    // 获取数组长度
    int n = getValidInput("请输入数组的长度 (1-1000): ", 1, 1000);

    // 动态分配原始数组内存
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("错误：内存分配失败！\n");
        return 1;
    }

    // 输入数组元素
    printf("\n请依次输入 %d 个整数:\n", n);
    for (int i = 0; i < n; i++) {
        printf("输入第 %d 个数: ", i + 1);
        arr[i] = getValidInput("", INT_MIN, INT_MAX);
    }

    // 打印原始数组
    printArray(arr, n, "\n原始数组: ");

    // 创建并排序升序数组
    int *arrAsc = copyArray(arr, n);
    if (arrAsc == NULL) {
        printf("错误：内存分配失败！\n");
        free(arr);
        return 1;
    }
    bubbleSort(arrAsc, n, compareAscending);
    printArray(arrAsc, n, "升序排序后: ");

    // 创建并排序降序数组
    int *arrDesc = copyArray(arr, n);
    if (arrDesc == NULL) {
        printf("错误：内存分配失败！\n");
        free(arr);
        free(arrAsc);
        return 1;
    }
    bubbleSort(arrDesc, n, compareDescending);
    printArray(arrDesc, n, "降序排序后: ");

    // 释放内存
    free(arr);
    free(arrAsc);
    free(arrDesc);

    // 打印程序结束时间
    now = time(NULL);
    printf("\n程序结束时间: %s", ctime(&now));
    
    return 0;
}
