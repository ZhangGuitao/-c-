/*���b=0�����������a�������Լ����
���򣬼���a����b����������a=b��b=�Ǹ�������
�ٴλص���һ��

a   b    t(��12��18�����Լ����
12  18  12
18  12  6
12  6   0
6   0
���Լ����6
*/

#include<stdio.h>
int main()
{
	int a,b;
	int t;
	printf("����������������");
	scanf("%d %d",&a,&b);
	int m=a;
	int n=b;
	
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
	printf("�������������Լ����%d",a);
	return 0;
 } 
 
