//数1到100中出现了多少次9；
//个位：i % 10 = 9; 十位：i / 10 = 9
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i = 0;
	int count = 0;
	//个位9的个数
	for (i = 1; i < 100; i++)
	{
		if(i % 10 == 9)
		count++;
		
	}
	//十位9的个数
	for (i = 1; i < 100; i++)
	{
		if(i / 10 == 9)
		count++;
	}

	printf("%d \n", count);

	system("pause");
	return 0;
}
