#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//qsort
//void qsort(void* base,
//	      size_t num, 
//       int(*cmp)(const void*e1, const void*e2));
//����һ���ṹ�� name age sex��
struct stu
{
	char name[20];
	int age;
};
 int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ��ַ�����strcmp����//
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
////text ����
//void text() 
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",15},{"wang",55} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort �������� 4������
//	//1.Ŀ���������ʵλ��
//	//2.����Ĵ�С Ԫ��
//	//3.����Ԫ�ص��ֽ� sizeof(arr[0]
//	//4.�ȽϺ��� cmp �ص�����
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%s ", s[j].name);
//	}
//}
//�ȽϺ���cmp age�Ƚ�   �ص�����
//����ֵ������ ��Ҫǿ������ת��
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}     
void swap(char* fen1, char* fen2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *fen1;
		*fen1 = *fen2;
		*fen2 = tmp;
		fen1++;
		fen2++;
	}
}
//���һ�������ǱȽϺ����ĵ�ַ ����ָ��
void bubble_sort(void*base,int sz,int width,int(*cmp)(void*e1,void*e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			//Ԫ�صıȽ�
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width )>0)
			{
				//����
				swap((char*)base + j * width, (char*)base + (j + 1)*width,width);
			}

		}
	}
}
void print(struct stu* s,int sz)
{
	int i = 0;
	for (i = 0; i<sz; i++)
	{
		printf("%s ", s[i].name);
		printf("%d\n", s[i].age);
	}
}
void text()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",15},{"wang",55} };
	int sz = sizeof(s) / sizeof(s[0]);
	int da = sizeof(s[0]);
	//ʹ��ð�ݺ����� ��֪���Լ������Ԫ����ʲô����
	bubble_sort(s,sz, sizeof(s[0]), cmp_stu_by_age);
	print(s,sz);
}

int main()
{

	text();
	return 0;
}