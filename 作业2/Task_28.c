#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//	��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//	student a am i
//	i ma a tneduts
//	i am a student


// ���ڲ���ʹ�ÿ⺯����������Ҫ��дһ�����������ַ����ĳ���
int mystrlen(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

void reverse(char *left, char *right)
{
	
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

void reverse_str(char *str, int sz)
{
	
	char *str1 = str;
	char *left = str;
	char *right = str + sz - 1;
	reverse(left, right);         //	�Ƚ��ַ������巴ת
	while (*str1)
	{
		left = str1;
		while ((*str1 != '\0') && (*str1 != ' ')) //	�ҵ����ʣ��˴�һ��Ҫ��(*str1 != '\0')�������ƣ�
			//	��Ϊ�ҵ����һ�����ʵ�ʱ��*str1��ԶҲ��Ϊ�ո�
		{
			str1++;
		}
		right = str1 - 1;               //		��ʱstr1ָ�򵥴ʺ󷽵Ŀո���Ҫ��һ����ָ�򵥴ʵ����һ����ĸ
		reverse(left, right);               //	�����巴ת���ٴη�ת���ʣ���ʹ����ƴд˳��ָ�����
		if (*str1 == ' ')             //	���ڿո���ָ�����һλ�����ܲ����´�ѭ����
		{
			str1++;
		}
	}
}

int main()
{
	char arr[ ] = "student a am i";
	int sz = mystrlen(arr);
	
	printf("�ƶ���ɺ�Ϊ��");
	reverse_str(arr, sz);
	printf("%s\n", arr);
	


	system("pause");
	return 0;
}
