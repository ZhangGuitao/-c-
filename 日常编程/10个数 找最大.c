//自己小学了一下c语言 
#include<stdio.h>
int main()
{
	int x,max,i;
	scanf("%d",&x);
    
	max=x;	
	for(i=2;i<=10;i++){
		scanf("%d",&x);
		if(x>max)
		max=x;
	}
	printf("max=%d\n",max);
}
