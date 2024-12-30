//
//  main.c
//  倒叙排列
//
//  Created by 小张621 on 2024/12/26.
//

#include <stdio.h>
#include <stdlib.h>

// 方法1：使用固定大小的数组
void inputArrayFixed(void) {
    int size;
    double array[100]; // 假设最大容量为100

    // 获取数组大小
    printf("请输入要存储的数字个数（最大100个）: ");
    scanf("%d", &size);

    if (size <= 0 || size > 100) {
        printf("无效的数组大小！\n");
        return;
    }

    // 输入数组元素
    printf("请输入 %d 个double类型的数字:\n", size);
    for (int i = 0; i < size; i++) {
        printf("请输入第 %d 个数字: ", i + 1);
        scanf("%lf", &array[i]);
    }

    // 打印原始数组
    printf("\n原始数组: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");

    // 实现倒序排列
    for (int i = 0; i < size / 2; i++) {
        double temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }

    // 打印倒序后的数组
    printf("倒序后数组: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

// 方法2：使用动态内存分配
void inputArrayDynamic(void) {
    int size;
    double* array;

    // 获取数组大小
    printf("请输入要存储的数字个数: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("无效的数组大小！\n");
        return;
    }

    // 动态分配内存
    array = (double*)malloc(size * sizeof(double));
    if (array == NULL) {
        printf("内存分配失败！\n");
        return;
    }

    // 输入数组元素
    printf("请输入 %d 个double类型的数字:\n", size);
    for (int i = 0; i < size; i++) {
        printf("请输入第 %d 个数字: ", i + 1);
        scanf("%lf", &array[i]);
    }

    // 打印原始数组
    printf("\n原始数组: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");

    // 倒序排列
    for (int i = 0; i < size / 2; i++) {
        double temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }

    // 打印倒序后的数组
    printf("倒序后数组: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");

    // 释放动态分配的内存
    free(array);
}

int main(void) {
    int choice;
    
    printf("请选择数组输入方式：\n");
    printf("1. 固定大小数组\n");
    printf("2. 动态分配数组\n");
    printf("请输入选择（1或2）: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            inputArrayFixed();
            break;
        case 2:
            inputArrayDynamic();
            break;
        default:
            printf("无效的选择！\n");
    }

    return 0;
}
