//求两个数的最大公约数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int a, b,i;

	printf("请输入两个数：");

	scanf("%d %d", &a, &b);

	if (a < b)

	{
		for (i = a; i > 0; i--)
		{
			if (b % i ==0 & a % i==0)
			{
				printf("最大公约数为：%d \n", i);
				break;
			}

		}
	}
	system("pause");
	return 0;
}
