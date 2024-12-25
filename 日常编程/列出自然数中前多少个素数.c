#include<stdio.h>
int main()
{
	int a;
	int count=0;
	int x;
	printf("自然数中前多少个素数：");
	scanf("%d",&a);
	
	for( x=2; count<a; x++)
	{
		int i;
		int isPrime=1;//这个数是素数的条件 
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
		count++;
		}
    }
	return 0;
 }
