#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//qsort
//void qsort(void* base,
//	      size_t num, 
//       int(*cmp)(const void*e1, const void*e2));
//定义一个结构体 name age sex；
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
//	//比较字符串用strcmp函数//
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
////text 函数
//void text() 
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",15},{"wang",55} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort 快速排序 4个参数
//	//1.目标数组的其实位置
//	//2.数组的大小 元素
//	//3.数组元素的字节 sizeof(arr[0]
//	//4.比较函数 cmp 回调函数
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%s ", s[j].name);
//	}
//}
//比较函数cmp age比较   回调函数
//返回值是整形 需要强制类型转化
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
//最后一个参数是比较函数的地址 函数指针
void bubble_sort(void*base,int sz,int width,int(*cmp)(void*e1,void*e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			//元素的比较
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width )>0)
			{
				//交换
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
	//使用冒泡函数的 人知道自己排序的元素是什么类型
	bubble_sort(s,sz, sizeof(s[0]), cmp_stu_by_age);
	print(s,sz);
}

int main()
{

	text();
	return 0;
}