#include <stdio.h>

//����һ��ָ���ຯ��swap ��������ֵ 
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//ѭ������lmy ��lmy��˭�������� �⻹���룿�� 
void lmy(int zgt[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (zgt[j] > zgt[j + 1]) {
                swap(&zgt[j], &zgt[j + 1]);
            }
        }
    }
}

//����һ������zgt (����û�´��ҽ�zgt�� 
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
