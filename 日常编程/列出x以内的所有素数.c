#include<stdio.h>
int main()
{
	int a;
	printf("�������ڵ�����������");
	scanf("%d",&a);
	
	int x;
	
	for( x=2; x<a; x++)
	{
		int i;
		int isPrime=1;//����������������� 
		for (i=2 ;i<x ;i++ )
		{
			if(x%i==0){
			isPrime=0;
			break;
			}
		}	
		
		if(isPrime==1)
		{
		printf("%d\n",x);
		}	
    }
	return 0;
 }
