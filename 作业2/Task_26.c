#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 不使用（a + b） / 2这种方式，求两个数的平均值。

int average(int x, int y)
{
	int ret;
	ret = (x - y) / 2 + y;            // 大的减去小的加上小的
	return ret;
}
int main()
{	
	int a;
	int b;

	printf("请输入两个整数(用空格隔开）：");
	scanf("%d %d",&a,&b);

	printf("这两个数的平均数为：%d \n", average(a, b));

	system("pause");
	return 0;
}
