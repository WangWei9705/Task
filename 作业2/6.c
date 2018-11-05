//将三个数字从大到小输出
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//定义变量a,b,c,MAX
	int a, b, c, MAX;

	//提示信息
	printf("请输入三个数字：");

	//键盘读取 数字
	scanf("%d %d %d", &a, &b, &c);

	//比较判断，交换a,b的值
	if (a > b)
	{
		MAX = a,a=b,b=MAX;
	}

	//比较判断，交换b,c值
	if (b > c)
	{
		MAX = b, b = c, c = MAX;
	}
	//比较判断，交换c,a值
	if (c > a)
	{
		MAX = c, c = a, a = MAX;
	}

	//将a,b,c从大到小输出
	printf("从大到小排列为：%d %d %d  \n",a,b,c);

	system("pause");
	return 0;
}
