#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//		
//		return 0;
//}


//c���Ե��Լ�����ϰ
//1.ջ����Ĭ��ʹ�ã���ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ�Ŀռ䣻
//2.���������±��������ַ���ɵ͵��߱仯��
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}