//
//  main.c
//  百元买鸡🐔
//
//  Created by 小张621 on 2024/12/21.
//
#include <stdio.h>

int main(void) {
    int cock, hen, chick;
    for (cock = 0; cock <= 20; cock++) {  // 公鸡最多买20只（因为总共100钱，公鸡一只5钱）
        for (hen = 0; hen <= 33; hen++) {  // 母鸡最多买33只（总共100钱，母鸡一只3钱）
            chick = 100 - cock - hen;  // 根据鸡的总数是100只，算出小鸡数量
            if (chick >= 0 && cock * 5 + hen * 3 + chick / 3 == 100 && chick % 3 == 0) {
                // 小鸡数量不能为负，且满足总钱数是100钱，同时小鸡数量必须是3的倍数
                printf("🐓%d只 🐔%d只 🐤%d只\n", cock, hen, chick);
            }
        }
    }
    return 0;
}
