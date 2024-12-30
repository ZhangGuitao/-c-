//
//  main.c
//  字符串练习
//
//  Created by 小张621 on 2024/12/26.
//编写一个名为string()的函数，接受两个指向字符串的指针作为参数。如果第2个字符包含在第1个字符串中，该函数将返回第1个字符串开始的地址。例如，string in("hats","at")将返回hats中a的地址 否则，该函数返回空指针。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。


#include <stdio.h>
#include<string.h>
// 自定义实现的 string_in 函数
char* string_in(const char* str1, const char* str2) {
    const char *p1, *p2, *p1_adv;

    // 如果 str2 为空字符串，直接返回 str1
    if (*str2 == '\0') {
        return (char*)str1;
    }

    // 遍历 str1
    for (p1 = str1; *p1 != '\0'; p1++) {
        // 当找到第一个匹配字符时，开始进一步比较
        if (*p1 == *str2) {
            p1_adv = p1;
            p2 = str2;

            // 逐字符比较
            while (*p1_adv != '\0' && *p2 != '\0' && *p1_adv == *p2) {
                p1_adv++;
                p2++;
            }

            // 如果 p2 已到达字符串结尾，说明完全匹配，返回开始匹配的位置
            if (*p2 == '\0') {
                return (char*)p1;
            }
        }
    }

    // 如果没有找到匹配，返回 NULL
    return NULL;
}

int main(int argc, const char * argv[])
{
    char str1[100];
    char str2[100];
    char* result;

    // 循环输入和测试
    while (1) {
        // 输入第一个字符串
        printf("请输入第一个字符串 (或输入 'exit' 退出): ");
        fgets(str1, sizeof(str1), stdin);
        // 去除换行符
        str1[strcspn(str1, "\n")] = '\0';
        if (strcmp(str1, "exit") == 0) {
            break;
        }

        // 输入第二个字符串
        printf("请输入第二个字符串: ");
        fgets(str2, sizeof(str2), stdin);
        // 去除换行符
        str2[strcspn(str2, "\n")] = '\0';

        // 调用 string_in 函数
        result = string_in(str1, str2);

        // 打印结果
        if (result) {
            printf("第二个字符串在第一个字符串中的位置是: %ld\n", result - str1);
        } else {
            printf("第二个字符串不在第一个字符串中.\n");
        }
    }

    return 0;
}

