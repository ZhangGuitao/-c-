#include<stdio.h>
int main()
{
    int day;
	
	printf("��������������ڼ���");
	scanf("%d",&day); 
	
	if(day>=1&&day<=7)
	{
	
		switch(day)
		{
			case  1:
			printf("���������\n");break;
		
			
			case 2:
		    printf("���������\n");break;
		    
		    case 3:
		   	printf("���������\n");break;
		   	
		   	case 4:
		   	printf("���������\n");break;
				
			case 5:
			printf("���������\n");break;
			
			case 6:
		    printf("��ĩ���\n");break;
		    
		    case 7:
		    printf("��ĩ���\n");break;	
		}
    }
    else{
    	printf("������λ��1��7֮�����");
	}
	return 0;
}
