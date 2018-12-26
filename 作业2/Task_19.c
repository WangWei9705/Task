#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//	递归和非递归分别实现strlen 


//	递归法：
int strlen(char str[])
{
	if (*str == '\0')
		return 0;

	return 1 + strlen(str + 1);

}

//	非递归法：
//int strlen(char string[])
//{
//	char *p = string;
//	
//	while (*string != '\0')
//		string++;
//	
//	return string - p;
//}

//主函数
int main()
{
	char str[] = "hello word !";
	printf("所求字符串为：%s \n", str);

	printf("该字符串的长度为：%d \n" , strlen(str));

	system("pause");
	return 0;
}
