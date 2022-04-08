#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//一维数组传参
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
//1...解释  （* （void (*)( ) )  0)();
//把0强制转换成函数指针类型  0是这个函数的地址
//然后解引用(调用)这个函数
//2...解释  void(*signal(int, void(*)(int)))(int)
//signal是一个函数声明  函数两个参数 int 和 函数指针 函数指针指向的函数参数 int  返回类型 void
//是个函数返回类型   void(*)(int) signal 函数返回类型 也是个函数指针
//====
//typedef void(* pfun_t)(int);
//pfun_t signal(int, pfun_t);
//typdef unsigend int uint;
//
//
//int* arr[5]; 指针数组
//int(*pa)(int, int) = add;
//需要一个数组 存放函数指针的数组===函数指针的数组
//int(*par[4])(int, int) = { add,sub,mul,div };//函数指针数组 
//例题
//char* my_strcpy(char* dest,const char* src)
//写一个函数指针pf 能够指向my_strcpy
//      char*(*pf)(char*, const char*)
//写一个函数指针数组 pfarr 能够存放 4个my_strcpy的函数地址
//      char*(*pfarr[4])(char*, const char*)
//实现计算器
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
	printf("加法> 请输入需要相加的数\n");
	scanf("%d%d", &x, &y);
	return x + y;
}
int sub()
{
	int x = 0;
	int y = 0;
	printf("减法> 请输入需要相减的数\n");
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
		printf("请选择：>");
     	scanf("%d", &i);
		int(*pfarr[3])() = { 0,add,sub };
		if (i >= 1 && i <= 2)
		{
			int ret = pfarr[i]();
			printf("结果等于%d\n", ret);
			break;
		}
		else if (i == 0)
		{
			break;
		}
		else
		{
			printf("输入错误,请重新输入\n");
		}
		/*switch (i)
		{
		case 1:
			ret=add();
			printf("结果等于%d\n", ret);
			break;
		case 2:
			ret=sub();
			printf("结果等于%d\n", ret);
			break;
		case 0:
			break;
		default:
			printf("选择错误\n");
			break;
		}*/
	} while (i);
	return 0;
}








            