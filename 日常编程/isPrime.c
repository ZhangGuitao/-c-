#include <stdio.h>

int iszhishu(int a) {
    // 1�����µ�������������ֱ�ӷ���0
    if (a <= 1) {
        return 0;
    }
    // ������2��a/2�������ж��Ƿ�������a
    for (int i = 2; i < a / 2; i++) {
        if (a % i == 0) {
            return 0;  // �ܱ���������������������0
        }
    }
    return 1;  // �����궼û��������������������1
}

int main(void) {
    int num = 18;
    if (iszhishu(num)) {
        printf("%d ������\n", num);
    } else {
        printf("%d ��������\n", num);
    }
    return 0;
}
