#include <stdio.h>

int main() {
    double num;
    double sum = 0;
    int count = 0;
    
    printf("���������֣�����0���������룺\n");
    scanf("%lf", &num);
    
	while (num!= 0) 
	{
        sum += num;
        count++;
        scanf("%lf", &num);
    }
        double average = sum / count;
        printf("��Щ���ֵ�ƽ������: %.2lf\n", average);

	return 0;
}
