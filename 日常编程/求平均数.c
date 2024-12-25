#include <stdio.h>

int main() {
    double num;
    double sum = 0;
    int count = 0;
    
    printf("请输入数字（输入0结束）输入：\n");
    scanf("%lf", &num);
    
	while (num!= 0) 
	{
        sum += num;
        count++;
        scanf("%lf", &num);
    }
        double average = sum / count;
        printf("这些数字的平均数是: %.2lf\n", average);

	return 0;
}
