#include<stdio.h>
int main()
{
    int day;
	
	printf("请输入今天是星期几：");
	scanf("%d",&day); 
	
	if(day>=1&&day<=7)
	{
	
		switch(day)
		{
			case  1:
			printf("工作日愉快\n");break;
		
			
			case 2:
		    printf("工作日愉快\n");break;
		    
		    case 3:
		   	printf("工作日愉快\n");break;
		   	
		   	case 4:
		   	printf("工作日愉快\n");break;
				
			case 5:
			printf("工作日愉快\n");break;
			
			case 6:
		    printf("周末愉快\n");break;
		    
		    case 7:
		    printf("周末愉快\n");break;	
		}
    }
    else{
    	printf("请输入位于1到7之间的数");
	}
	return 0;
}
