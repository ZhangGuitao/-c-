#include<stdio.h>
int main()
{
    int greed,m;
	
	printf("ÇëÊäÈëÄúµÄ³É¼¨£º");
	scanf("%d",&greed); 
	
	m=greed%10;
	
	if(m<6){
		printf("E\n");
	}
	
	else
	{
		switch(m)
		{
			
			case 6:
		    printf("D\n");break;
		    
		    case 7:
		    printf("C\n");break;
		    
		    case 8:
		    printf("B\n");break;
		    
		    case 9:
		    printf("A\n");break;
		    
		    case 10:
		    printf("A\n");break;		
		}
	}
	return 0;
}

