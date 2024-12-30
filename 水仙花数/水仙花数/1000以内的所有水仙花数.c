//水仙花数
#include<stdio.h>

int main(void) {
    int num, start_num, remainder, result;

    printf("10000以内的所有水仙花数：\n");

    // 遍历所有一位数到三位数
    for (num = 1; num < 10000; num++) {
        start_num = num;
        result = 0;

        // 根据数字的位数计算各位数字的幂次和
        while (start_num!= 0)
        {
            remainder = start_num % 10;
            if (num < 100) {
                result += remainder * remainder;
            }
            else if(num>=100&&num<=1000)
            {
                result +=remainder * remainder*remainder ;

            }
            else if(num>1000)
            {
                result +=remainder * remainder * remainder *remiander ;

            }
            start_num /= 10;
        }

        // 如果各位数字的幂次和等于原数，则是水仙花数
        if (result == num) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
