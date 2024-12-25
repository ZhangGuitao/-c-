#include<stdio.h>


	int search(int key,int a[ ], int len)
	{
		int ret=-1;
		
		for(int i=0 ; i<len ; i++ )
		{
			if (key==a[i])
			{
				ret=i;
				break;
			}
		}
       	return ret;
    }


int main()
{
	int a[]={1,3,5,7,92,4,6,8,0,10};

	int t=0; 
    printf("请输入您想搜索的数字：");
	scanf("%d",&t);
	int r=search(t,a,sizeof(a)/sizeof(a[0]));
	
	
	
	if(r!=-1) 
	printf("您所寻找的数在第%d个位置\n",r+1) ;
	
	else
	printf("未寻找到您所搜索的数字");
	return 0;
}
