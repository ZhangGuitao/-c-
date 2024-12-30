#include <stdio.h>

// 交换两个元素的函数
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 选择基准并分区
int partition(int arr[], int low, int high) {
    // 选择最右边的元素作为基准
    int pivot = arr[high];
    // i 是小于基准元素的区域的最后一个位置
    int i = low - 1;

    // 遍历数组，将小于基准的元素放到左边
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;  // 移动 i 到下一个位置
            swap(&arr[i], &arr[j]);
        }
    }
    // 将基准元素放到正确的位置
    swap(&arr[i + 1], &arr[high]);
    return i + 1;  // 返回基准元素的位置
}

// 快速排序主函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // 获取基准位置
        int pi = partition(arr, low, high);

        // 分别对基准左右两边的子数组进行排序
        quickSort(arr, low, pi - 1);  // 左边部分
        quickSort(arr, pi + 1, high); // 右边部分
    }
}

// 打印数组的函数
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("原始数组: ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("排序后数组: ");
    printArray(arr, n);

    return 0;
}
