#include <stdio.h>

//定义一个指针类函数swap 用来交换值 
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//循环函数lmy （lmy是谁？是她啊 这还用想？） 
void lmy(int zgt[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (zgt[j] > zgt[j + 1]) {
                swap(&zgt[j], &zgt[j + 1]);
            }
        }
    }
}

//定义一个数组zgt (对你没猜错我叫zgt） 
int main()
{
    int zgt[10] = {7,2,4,5,2,0,621,724,2006,666,1000};
    int n = sizeof(zgt) / sizeof(zgt[0]);

    lmy(zgt, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", zgt[i]);
    }

    return 0;
}
