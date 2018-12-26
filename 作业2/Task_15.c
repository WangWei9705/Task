#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//	递归和非递归分别实现求第n个斐波那契数

//	递归法：
//
//int  fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return  fib(n - 1) + fib(n - 2) ;
//	}
//}

//	非递归法：

int fib(int num)
{
	int i, f1 = 1, f2 = 1, f3 = 0;                                       
	for (i = 3; i <= num ; i++)
	{
		f3 = f2 + f1;
		f2 = f1;
		f1 = f3;
	}   

	return f3;
	
}
int main()
{
	int num;
	printf("请问你想打印第几个斐波那契数：");
	scanf("%d", &num);

	printf("第%d个斐波那契数为：%d \n", num, fib(num));

	system("pause");
	return 0;
}
