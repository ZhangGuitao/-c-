#include<stdio.h>

int main()
{
	const int MIN = 18;
	int age = 0;//初始化

	printf("请输入你的年龄：");
	scanf("%d,&age");

	printf("你的年龄是%d岁。\n,age");

	if (age < MIN)//年龄条件

	{
		printf("小屁孩好好学习。");//太小了
	}

	printf("你离死还远着呢 嘻嘻\n");//太老了



}
