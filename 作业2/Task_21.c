#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//	递归方式实现打印一个整数的每一位 

void print_num(int n)
{
	if (n > 9)
	{
		print_num(n / 10) ;
	}
	printf("%d ", n % 10);
}


int main()
{	
	int n;
	printf("请输入一个整数：");
	scanf("%d", &n);

	print_num(n);
	printf("\n");

	system("pause");
	return 0;
}
