#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//	�ݹ�ͷǵݹ�ֱ�ʵ��strlen 


//	�ݹ鷨��
int strlen(char str[])
{
	if (*str == '\0')
		return 0;

	return 1 + strlen(str + 1);

}

//	�ǵݹ鷨��
//int strlen(char string[])
//{
//	char *p = string;
//	
//	while (*string != '\0')
//		string++;
//	
//	return string - p;
//}

//������
int main()
{
	char str[] = "hello word !";
	printf("�����ַ���Ϊ��%s \n", str);

	printf("���ַ����ĳ���Ϊ��%d \n" , strlen(str));

	system("pause");
	return 0;
}
