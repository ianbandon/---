#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//һά���鴫��
//void test(int arr[])
//{}
//void text(int*arr)
//{}
//void text2(int*arr[])
//{}
//void test2(int **arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[10] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}
/*int main()
{


	return 0;
}*/
//1...����  ��* ��void (*)( ) )  0)();
//��0ǿ��ת���ɺ���ָ������  0����������ĵ�ַ
//Ȼ�������(����)�������
//2...����  void(*signal(int, void(*)(int)))(int)
//signal��һ����������  ������������ int �� ����ָ�� ����ָ��ָ��ĺ������� int  �������� void
//�Ǹ�������������   void(*)(int) signal ������������ Ҳ�Ǹ�����ָ��
//====
//typedef void(* pfun_t)(int);
//pfun_t signal(int, pfun_t);
//typdef unsigend int uint;
//
//
//int* arr[5]; ָ������
//int(*pa)(int, int) = add;
//��Ҫһ������ ��ź���ָ�������===����ָ�������
//int(*par[4])(int, int) = { add,sub,mul,div };//����ָ������ 
//����
//char* my_strcpy(char* dest,const char* src)
//дһ������ָ��pf �ܹ�ָ��my_strcpy
//      char*(*pf)(char*, const char*)
//дһ������ָ������ pfarr �ܹ���� 4��my_strcpy�ĺ�����ַ
//      char*(*pfarr[4])(char*, const char*)
//ʵ�ּ�����
void menu()
{
	printf("******************************\n");
	printf("****1. add      2. sub    ****\n");
	printf("******   0.exit   ************\n");
	printf("******************************\n");
}
int add()
{
	int x = 0;
	int y = 0;
	printf("�ӷ�> ��������Ҫ��ӵ���\n");
	scanf("%d%d", &x, &y);
	return x + y;
}
int sub()
{
	int x = 0;
	int y = 0;
	printf("����> ��������Ҫ�������\n");
	scanf("%d%d", &x, &y);
	return x - y;
}
int main()
{
	int i = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("��ѡ��>");
     	scanf("%d", &i);
		int(*pfarr[3])() = { 0,add,sub };
		if (i >= 1 && i <= 2)
		{
			int ret = pfarr[i]();
			printf("�������%d\n", ret);
			break;
		}
		else if (i == 0)
		{
			break;
		}
		else
		{
			printf("�������,����������\n");
		}
		/*switch (i)
		{
		case 1:
			ret=add();
			printf("�������%d\n", ret);
			break;
		case 2:
			ret=sub();
			printf("�������%d\n", ret);
			break;
		case 0:
			break;
		default:
			printf("ѡ�����\n");
			break;
		}*/
	} while (i);
	return 0;
}








            