//判断1000年到2000年之间的闰年（普通闰年：能被4整除并且不能被100整除；世纪闰年：能被400整除）
//if条件判断语句

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	scanf("%d",&i);    //&取地址符号
	//判断i是否能被4整除
	if (i % 4 == 0)
	{
		//判断i是否能被100整除
		if (i % 100 != 0)
	
		{
			printf("%d是普通闰年 \n", i);
		}
		//世纪闰年
		if (i % 400 == 0)
		{
			printf("%d是世纪闰年", i);
		}
	}

	printf("%d不是闰年", i);

	system("pause");
	return 0;
}