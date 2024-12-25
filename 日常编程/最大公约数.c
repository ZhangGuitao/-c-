/*如果b=0，计算结束，a就是最大公约数；
否则，计算a除以b的余数，让a=b，b=那个余数，
再次回到第一步

a   b    t(求12和18的最大公约数）
12  18  12
18  12  6
12  6   0
6   0
最大公约数是6
*/

#include<stdio.h>
int main()
{
	int a,b;
	int t;
	printf("请输入这两个数：");
	scanf("%d %d",&a,&b);
	int m=a;
	int n=b;
	
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
	printf("这两个数的最大公约数是%d",a);
	return 0;
 } 
 
