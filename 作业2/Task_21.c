#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//	�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 

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
	printf("������һ��������");
	scanf("%d", &n);

	print_num(n);
	printf("\n");

	system("pause");
	return 0;
}
