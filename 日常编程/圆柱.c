#include<stdio.h>
#include<math.h>
int main()
{
	/*s1表示圆的面积 s2表示圆柱侧面积*/ 
	float l,h,r,s1,s2,v;
	float pi=3.141592;
	
	printf("请输入圆的半径r:");
	scanf("%f",&r);
	
	printf("请输入圆柱的高h:");
	scanf("%f",&h);
	
	 l=2*pi*r;
     s1=pi*r*r;
	 s2=2*pi*r*h;
	 v=pi*r*r*h;
	
	printf("圆的周长为：%.2f\n",l);
		printf("圆的面积为：%.2f\n",s1);
			printf("圆柱表面积为：%.2f\n",s2);
				printf("圆柱体积为：%.2f\n",v);
				
	return 0;
 }
