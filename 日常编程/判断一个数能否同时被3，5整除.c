#include<stdio.h>
int main()
{
	int n;
	printf("������n��ֵ��");
	scanf("%d",&n);
	
	if(n%5==0&&n%3==0){
		
		printf("�������ͬʱ��3��5����\n");
		
	} 
	else{
		
		printf("���������ͬʱ��3��5����\n"); 
	}
	
	return 0;
}
