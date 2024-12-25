#include <stdio.h>

int iszhishu(int a) {
    // 1及以下的数不是质数，直接返回0
    if (a <= 1) {
        return 0;
    }
    // 遍历从2到a/2的数来判断是否能整除a
    for (int i = 2; i < a / 2; i++) {
        if (a % i == 0) {
            return 0;  // 能被整除，不是质数，返回0
        }
    }
    return 1;  // 遍历完都没被整除，是质数，返回1
}

int main(void) {
    int num = 18;
    if (iszhishu(num)) {
        printf("%d 是质数\n", num);
    } else {
        printf("%d 不是质数\n", num);
    }
    return 0;
}
