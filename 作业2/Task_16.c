#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//	��дһ������ʵ��n^k��ʹ�õݹ�ʵ��

//	������n^k=n*n^(k-1)

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
	printf("����������Ҫ��������η���");
	scanf("%d %d", &num, &k);

	printf("����Ҫ������Ľ��Ϊ��%d \n", index(num, k));
	system("pause");
	return 0;
}
