#include<stdio.h>
int main()
{
	int n;
	printf("请输入n的值：");
	scanf("%d",&n);
	
	if(n%5==0&&n%3==0){
		
		printf("这个数能同时被3和5整除\n");
		
	} 
	else{
		
		printf("这个数不能同时被3和5整除\n"); 
	}
	
	return 0;
}
