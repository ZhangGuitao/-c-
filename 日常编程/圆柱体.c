#include <stdio.h>
#define PI 3.1415926

int main(void) {
    double R, H;
    // �������뾶�͸�
    printf("������Բ����ĵ���뾶�͸ߣ��ÿո��������\n");
    scanf("%lf %lf", &R, &H);

    // ��������
    double base_area = PI * R * R;
    // ��������
    double surface_area = 2 * PI * R * R + 2 * PI * R * H;
    // �������
    double volume = PI * R * R * H;

    // ������
    printf("�������%lf\n", base_area);
    printf("�������%lf\n", surface_area);
    printf("�����%lf\n", volume);

    return 0;
}
