#include<stdio.h>
#include<math.h>
int main()
{
	/*s1��ʾԲ����� s2��ʾԲ�������*/ 
	float l,h,r,s1,s2,v;
	float pi=3.141592;
	
	printf("������Բ�İ뾶r:");
	scanf("%f",&r);
	
	printf("������Բ���ĸ�h:");
	scanf("%f",&h);
	
	 l=2*pi*r;
     s1=pi*r*r;
	 s2=2*pi*r*h;
	 v=pi*r*r*h;
	
	printf("Բ���ܳ�Ϊ��%.2f\n",l);
		printf("Բ�����Ϊ��%.2f\n",s1);
			printf("Բ�������Ϊ��%.2f\n",s2);
				printf("Բ�����Ϊ��%.2f\n",v);
				
	return 0;
 }
