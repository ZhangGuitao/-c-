#include <stdio.h>
int main() {
    int n;
    int a, b, c, m;
    printf("������һ����λ����");
    scanf("%d", &n); 
    a = n / 100; 
    b = (n / 10) % 10;
    c = n % 10; 
    m = c * 100 + b * 10 + a; 
    printf("�����λ����������λ����:%d\n", m); 
    return 0;
}
