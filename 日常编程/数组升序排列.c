#include <stdio.h>
#include <stdlib.h>

// ð��������
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

    // ʹ��malloc��̬�����ڴ�
    arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL) {
        printf("�ڴ����ʧ�ܣ�\n");
        return 1;
    }

    // �û���������Ԫ��
    printf("������10��������\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // ����ð��������
    bubbleSort(arr, 10);

    // �������������
    printf("���������飺\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}

