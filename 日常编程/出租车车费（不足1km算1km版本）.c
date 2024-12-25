#include <stdio.h>

int main()
{
    int start = 3;          // 起步公里数
    int start_money = 10;   // 起步价
    float km = 0;           // 行驶里程
    int stop_time = 0;      // 停车时间
    int stop_money = 0;     // 停车费用
    int money;              // 总金额
    int subsidy;            // 超过10公里以上的部分加收50%的回空补贴费，即每公里3元
    int money2;             // 超起步里程后10公里内，每公里2元

    printf("请输入行驶里程,等待时间:\n");
    scanf("%f %d", &km, &stop_time);

    // 根据停车时间计算停车费用，假设每等待5分钟收取2元停车费
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

    printf("您所需要支付的总费用为：%d(元)\n", money);

    return 0;
}
