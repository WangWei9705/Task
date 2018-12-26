#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//	 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//	例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

int DigitSum(n)
{

	if (n > 0)
	{
		return n % 10 + DigitSum(n/10) ;
	}
	return 0;
}


int main()
{	
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	printf("该数字的组成数字的和为：%d \n",DigitSum(num));
	system("pause");
	return 0;
}
