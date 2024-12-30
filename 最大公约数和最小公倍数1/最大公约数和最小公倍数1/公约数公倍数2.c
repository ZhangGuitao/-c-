#include <stdio.h>

// 更相减损术求最大公约数
int gcd(int a, int b) {
    while (a!= b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

// 根据最大公约数求最小公倍数
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main(void) {
    int num1, num2，b;
    printf("请输入两个整数：");
    scanf("%d %d", &num1, &num2);

    int greatest_common_divisor = gcd(num1, b);
    int least_common_multiple = lcm(num1, b);

    printf("最大公约数为：%d\n", greatest_common_divisor);
    printf("最小公倍数为：%d\n", least_common_multiple);

    return 0;
}
