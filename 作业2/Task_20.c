#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//	递归和非递归分别实现求n的阶乘
//	n!=n*n(n-1)!

//	递归法：
//int factorial(int n)
//{
//	if (n == 1)
//		return 1;
//	return  n*factorial(n - 1);
//
//}

//	非递归法：
int factorial(int n)
{
	int i;
	int ret =1 ;

	for (i = 1; i <= n; i++)
	{
		ret = ret *i;
		
	}
	
	return ret;
}

//主函数
int main()
{	
	int n;
	printf("请问你想求几的阶乘：");
	scanf("%d", &n);

	printf("%d的阶乘为：%d \n", n, factorial(n));
	system("pause");
	return 0;
}
