//�Լ�Сѧ��һ��c���� 
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
