#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//	�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

//	�ݹ鷨��
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

//	�ǵݹ鷨��

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
	printf("���������ӡ�ڼ���쳲���������");
	scanf("%d", &num);

	printf("��%d��쳲�������Ϊ��%d \n", num, fib(num));

	system("pause");
	return 0;
}
