//�����������α�����ֵ��������ֵ�����ݽ��н���
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	//�����������α���a,b
//	int a = 10;
//	int b = 20;
//
//	//��������ָ��ֱ���a,b�ĵ�ַ
//	int* p = &a;
//	int* p1 = &b;
//
//	//����a,b��ֵ
//	*p =20;
//	*p1 =10;
//
//	printf("a =%d,b =%d", a, b);
//	
//	system("pause");
//	return 0;
//}
//
//
//
////������
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c;
//	c = a;
//	a = b;
//	b = c;
//
//	printf("a =%d,b =%d", a, b);
//	system("pause");
//		return 0;
//}

//��ʹ�õ�����������������������ֵ
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 10;
	int b = 20;

	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d %d", a, b);

	system("pause");
	return 0;
}