#include<stdio.h> 

int swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}




int main(void)
{
	int a=0;
	int b=0;
	printf("请依次输入两个数字a,b(用空格间隔)：\n");
	scanf("%d %d",&a,&b); 
	
	swap(&a,&b);
	printf("见过交换后a=%d,b=%d",a,b);
	
	return 0;
}
