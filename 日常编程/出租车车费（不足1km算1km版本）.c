#include <stdio.h>

int main()
{
    int start = 3;          // �𲽹�����
    int start_money = 10;   // �𲽼�
    float km = 0;           // ��ʻ���
    int stop_time = 0;      // ͣ��ʱ��
    int stop_money = 0;     // ͣ������
    int money;              // �ܽ��
    int subsidy;            // ����10�������ϵĲ��ּ���50%�Ļؿղ����ѣ���ÿ����3Ԫ
    int money2;             // ������̺�10�����ڣ�ÿ����2Ԫ

    printf("��������ʻ���,�ȴ�ʱ��:\n");
    scanf("%f %d", &km, &stop_time);

    // ����ͣ��ʱ�����ͣ�����ã�����ÿ�ȴ�5������ȡ2Ԫͣ����
    stop_money = (stop_time / 5) * 2;

    if (km <= 3 && km >= 0)
    {
        start_money = 10;
        subsidy = 0;
        money2 = 0;
    }
    else if (km > 3 && km <= 13)
    {
        if (km - (int)km > 0)
        {
            km = (int)km + 1;
        }
        subsidy = 0;
        start_money = 10;
        money2 = (km - 3) * 2;
    }
    else if (km > 13)
    {
        if (km - (int)km > 0)
        {
            km = (int)km + 1;
        }
        subsidy = (km - 13) * 3;
        money2 = 20;
        start_money = 10;
    }

    money = start_money + stop_money + money2 + subsidy;

    printf("������Ҫ֧�����ܷ���Ϊ��%d(Ԫ)\n", money);

    return 0;
}
