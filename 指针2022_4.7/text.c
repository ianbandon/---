#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ָ���С�ǹ̶���4��32λ����8���ֽڣ�64λ��
//int main()
//{
//	char arr[] = "abcdf";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdf";//�����ַ���  �����a�ĵ�ַ
//	//printf("%s\n", p);
//	printf("%s\n", p);
//	return 0;
//}
//����ָ��===ָ��
//int main()
//{
//	int* p = NULL;//������εĵ�ַ     arr ��Ԫ�ص�ַ    &arr[0]  ��Ԫ�ص�ַ
//	char* pc = NULL;//����ַ��ĵ�ַ    &arr  ����ĵ�ַ
//	int arr[6] = { 0,1,2,3,4,5 };//����ָ�� �������ĵ�ַ
//	int(* p)[10]=&arr;//p��������ָ��
//	return 0;
//}
//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//	//*pa ָ��     (*pa)[5] ���ָ����ɵ�ָ������    ǰ��+char* �൱�������Ԫ��������char*
//	///*+��ĸ ��ʾ ָ��        char*  ָ��ָ���Ԫ������
//	return 0;
//}
//�������������ʽ pritnf1
void printf1(int arr[3][3],int x,int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//������ָ�����ʽprintf2
void printf2(int(*p)[3],int x,int y)//����������һά����ĵ�ַ Ӧ�÷ŵ�����ָ��
{
    	int i = 0;
		for (i = 0; i < x; i++)
		{
			int j = 0;
			for (; j < y; j++)
			{
			/*	printf("%d ", *(*(p + i) + j));*/
				printf("%d ", (*(p + i))[j]);
			}
			printf("\n");
		}

}
int main()
{
	int arr[3][3] = { {1,2,3},{7,8,9},{4,5,6} };
	printf1(arr, 3, 3);//arr����Ԫ�ص�ַ
	printf2(arr, 3, 3);///arr��(��һ�е�һά����)�ĵ�ַ
	return 0;
}
//����****************����***********����
 //int arr[5]
//int* arr1[10];
    arr1�Ǹ����飨10��Ԫ�أ�ÿ��Ԫ����(int*)==ָ�� ->ָ��ָ�����int�͵�Ԫ��
    arr1[10]{int*��int*��int*,int*-----} int *ָ�����int��Ԫ��
//int(*arr2)[10];
    arr2�Ǹ�ָ��  
    �ѣ�*arr2��ȥ��  ʣ�µ���ָ��ָ��ĵ�Ԫ��  int[10]
    ָ��ָ������   ����====int[10] 10��Ԫ��
//int(*arr3[10])[5];
arr3�Ǹ����� 10��Ԫ��
������ȥ��  ʣ�µľ������������Ԫ������
  int *     +++++++   [5]
Ԫ�����ͣ�ָ�룩 ->ָ�����5������Ϊint��Ԫ��    
