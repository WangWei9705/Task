#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//	��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//	ʵ�֣��������ַ����е��ַ��������С�
//	Ҫ�󣺲���ʹ��C�������е��ַ�������������

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
	printf("δ����ǰ���ַ���Ϊ��%s \n", str);
	
	printf("�������к���ַ���Ϊ��");
	reverse_string( str);      //	����reverse_string����
	printf("\n");

	system("pause");
	return 0;
}
