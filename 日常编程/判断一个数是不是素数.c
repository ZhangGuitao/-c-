#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个数:");
	scanf("%d",&x);
	
	int i;
	int isPrime=1;//这个数是素数的条件 
	
	for(i=2;i<x;i++){
		if(x%i==0){
			isPrime=0;
		}
	}
	if(isPrime==1){
	printf("这个数是素数");
	}else{
		printf("这个数不是素数");
	}
	return 0;
 }
