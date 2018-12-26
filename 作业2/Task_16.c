#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//	编写一个函数实现n^k，使用递归实现

//	分析：n^k=n*n^(k-1)

int index(int n,int k)
{
	if (n == 0)
	{
		return 0;
	}
	else if (k == 1)
	{
		return n;
	}
	else
	{
		return n*index(n, k - 1);
	}
}



int main()
{
	int num, k;
	printf("请输入你想要求的数及次方：");
	scanf("%d %d", &num, &k);

	printf("你所要求的数的结果为：%d \n", index(num, k));
	system("pause");
	return 0;
}
