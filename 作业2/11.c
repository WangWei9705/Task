//打印菱形
//上半部分：
//(i = 1; i <= line; i++)  
//输入line = 7
//第i行元素数：2*i - 1
//第i行空格数：line - i
//下半部分：
//第i行元素数：2*(line - i) - 1
//第i行空格数：i
//(i = 1; i<line; i++)

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int j = 0;
	int line = 0;

	printf("请输入需要打印行数：");
	scanf("%d", &line);
	//上半部分
	for (i = 1; i <= line; i++)
	{
		//开始打印空格
		for (j = 1; j <= (line - i); j++)
		{
			printf(" ");
		}
		//开始打印*
		for (j = 1; j <= (2 * i - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下半部分
	for (i = 1; i < line; i++)
	{
		// 开始打印空格
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		//开始打印*
		for (j = 1; j <= (2 * (line - i) - 1); j++)
		{
			printf("*");
		}
		printf("\n");

	}
	system("pause");
	return 0;
}
