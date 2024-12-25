#include <stdio.h>
int main() {
    int n;
    int a, b, c, m;
    printf("请输入一个三位数：");
    scanf("%d", &n); 
    a = n / 100; 
    b = (n / 10) % 10;
    c = n % 10; 
    m = c * 100 + b * 10 + a; 
    printf("这个三位数的逆序三位数是:%d\n", m); 
    return 0;
}
