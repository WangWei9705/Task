//给定两个整形变量的值，将两个值的内容进行交换
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	//给定两个整形变量a,b
//	int a = 10;
//	int b = 20;
//
//	//定义两个指针分别存放a,b的地址
//	int* p = &a;
//	int* p1 = &b;
//
//	//交换a,b的值
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
////方法二
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

//不使用第三变量，交换两个变量的值
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