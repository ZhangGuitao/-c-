#include <stdio.h>

int main(void) {
    int i, j;
    int arr[10][10];
    int n=0;
    // 构建杨辉三角
    printf("请输入行数n：");
    scanf("%d",&n);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                // 每行的开头和结尾元素都为1
                arr[i][j] = 1;
            } else {
                // 其他元素等于它上方两元素之和
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    // 打印杨辉三角并进行格式调整使其更像三角形
    for (i = 0; i < n; i++) {
        // 先打印空格来调整对齐，形成等腰三角形的样子
        for (int k = 0; k < n- i; k++) {
            printf("   ");
        }
        for (j = 0; j <= i; j++) {
            printf("%6d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
