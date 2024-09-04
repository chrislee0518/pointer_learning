#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void menu()
//{
//	printf("1.add    2.sub\n");
//	printf("3.mul    4.div\n");
//	printf("0.exit\n");
//}
//int add1(int x, int y)
//{
//	return x + y;
//}
//
//int sub1(int x, int y)
//{
//	return x - y;
//}
//
//int mul1(int x, int y)
//{
//	return x * y;
//}
//
//int div1(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", add1(a, b));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", sub1(a, b));
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", mul1(a, b));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", div1(a, b));
//			break;
//		case 0:
//			printf("exit\n");
//			break;
//		default:
//			printf("again\n");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//}

//冗余部分封装
//void Calc(int (*pf)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个操作数：");
//	scanf("%d%d", &a, &b);
//	printf("%d\n", pf(a, b));
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(add1);
//			break;
//		case 2:
//			Calc(sub1);
//			break;
//		case 3:
//			Calc(mul1);
//			break;
//		case 4:
//			Calc(div1);
//			break;
//		case 0:
//			printf("exit\n");
//			break;
//		default:
//			printf("again\n");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//
//
//}

//函数指针数组的形式简化代码--转移表
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int(*parr[5])(int, int) = { 0,add1,sub1,mul1,div1 };
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &a, &b);
//			int ret = parr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("exit\n");
//		}
//		else
//		{
//			printf("again\n");
//		}
//	} while (input);
//
//	return 0;
//}

//指向函数指针数组的指针

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	int (*pf)(int);//函数指针
//
//	int (*pfarr[5])(int);//  pfarr是一个数组 函数指针数组，里面存5个函数指针
//	//ppfarr是一个指向【函数指针数组】的指针
//	int(*(*ppfarr)[5])(int)=&pfarr;//ppfarr是一个数组指针，指针指向的数组有5个元素，
//	//指向的数组每个元素类型是int(*  )(int)，一个函数指针
//}

//回调函数



//void print(char* str)//print函数就是回调函数，不直接引用，通过指针访问该函数
//{
//	printf("%s", str);
//}
//
//void test(void (*p)(char*))//p->print函数的地址
//{
//	printf("test\n");
//	p("haha");
//}
//int main()
//{
//	test(print);//传进去print函数的地址
//	return 0;
//}

void Bubblesort(int arr[], int sz)
{

}
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubblesort(arr, sz);
	return 0;
}
//qsort