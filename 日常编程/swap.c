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
	printf("������������������a,b(�ÿո���)��\n");
	scanf("%d %d",&a,&b); 
	
	swap(&a,&b);
	printf("����������a=%d,b=%d",a,b);
	
	return 0;
}
