#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//	�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//	���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//	A˵�������ҡ�  
//	B˵����C��         
//	C˵����D��        
//	D˵��C�ں�˵     
//	��֪3����˵���滰��1����˵���Ǽٻ���
//	�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�


int main()
{
	int killer;

	//����ASIC���������
	for (killer = 'A'; killer <= 'D'; killer++)
	{

		//	�ж�������������ֻ��˵�ٻ�
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
			printf("killer is %c \n",killer);
	}
		

	system("pause");
	return 0;
}
