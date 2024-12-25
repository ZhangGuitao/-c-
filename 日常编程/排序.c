#include<stdio.h>
void  iszhishu(int a)
{  for(int i=2 ; i<a/2 ; i++)
  	{
    if(a%i==0) printf("no");
  
   else  
   printf("ÊÇÖÊÊý");
   break;
	}
}

int main(void)
{
	iszhishu(18);
	return 0;
}
