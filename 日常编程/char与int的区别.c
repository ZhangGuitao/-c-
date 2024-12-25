#include<stdio.h>
int main()
{
	/*char只能存放字母*/
	/*int用来存放数据*/ 
	/*char的范围类型是0-255*/ 
	/*%c对应输出的是字符， 
	%d对应输出是整数*/ 

	int c1,c2;
	c1=197;
	c2=198;

	printf("c1=%c,c=%c\n",c1,c2);
	printf("c1=%d,c2=%d\n",c1,c2);

	return 0;
	}
