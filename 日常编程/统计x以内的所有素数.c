#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int count=0;
	
	for(x;count<x;x++);
	{
		int i;
		int isPrime=1;
		for (i=x;i<x;i++)
		{
			if(x%i==0)
			{
				isPrime=0;
				break;
			}
		}
			if(isPrime==1)
			{
				printf("%d",x);
				count++;
			}
	}
	printf("\n");
	
	return 0;
}


