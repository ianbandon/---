#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//指针大小是固定的4（32位）或8个字节（64位）
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
//	const char* p = "abcdf";//常量字符串  存的是a的地址
//	//printf("%s\n", p);
//	printf("%s\n", p);
//	return 0;
//}
//数组指针===指针
//int main()
//{
//	int* p = NULL;//存放整形的地址     arr 首元素地址    &arr[0]  首元素地址
//	char* pc = NULL;//存放字符的地址    &arr  数组的地址
//	int arr[6] = { 0,1,2,3,4,5 };//数组指针 存放数组的地址
//	int(* p)[10]=&arr;//p就是数组指针
//	return 0;
//}
//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//	//*pa 指针     (*pa)[5] 五个指针组成的指针数组    前面+char* 相当于数组的元素类型是char*
//	///*+字母 表示 指针        char*  指针指向的元素类型
//	return 0;
//}
//参数是数组的形式 pritnf1
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
//参数是指针的形式printf2
void printf2(int(*p)[3],int x,int y)//传过来的是一维数组的地址 应该放到数组指针
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
	printf1(arr, 3, 3);//arr是首元素地址
	printf2(arr, 3, 3);///arr是(第一行的一维数组)的地址
	return 0;
}
//区分****************区分***********区分
 //int arr[5]
//int* arr1[10];
    arr1是个数组（10个元素）每个元素是(int*)==指针 ->指针指向的是int型的元素
    arr1[10]{int*，int*，int*,int*-----} int *指向的是int型元素
//int(*arr2)[10];
    arr2是个指针  
    把（*arr2）去掉  剩下的是指针指向的的元素  int[10]
    指针指向数组   数组====int[10] 10个元素
//int(*arr3[10])[5];
arr3是个数组 10个元素
把数组去掉  剩下的就是数组里面的元素类型
  int *     +++++++   [5]
元素类型（指针） ->指向的是5和类型为int的元素    
