#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//	�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//	n!=n*n(n-1)!

//	�ݹ鷨��
//int factorial(int n)
//{
//	if (n == 1)
//		return 1;
//	return  n*factorial(n - 1);
//
//}

//	�ǵݹ鷨��
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

//������
int main()
{	
	int n;
	printf("���������󼸵Ľ׳ˣ�");
	scanf("%d", &n);

	printf("%d�Ľ׳�Ϊ��%d \n", n, factorial(n));
	system("pause");
	return 0;
}
