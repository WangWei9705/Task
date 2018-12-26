#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//	编写一个函数 reverse_string(char * string)（递归实现）
//	实现：将参数字符串中的字符反向排列。
//	要求：不能使用C函数库中的字符串操作函数。

void  reverse_string(char * string)
{
	if (*string == '\0')
	{
		return 0;
	}
	else
	{
		reverse_string(string + 1);
	}
	printf("%c", *string);

}

int main()
{	
	char *str = "hello bit !";
	printf("未排序前的字符串为：%s \n", str);
	
	printf("反向排列后的字符串为：");
	reverse_string( str);      //	调用reverse_string函数
	printf("\n");

	system("pause");
	return 0;
}
