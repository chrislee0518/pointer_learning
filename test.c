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
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("������������������");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", add1(a, b));
//			break;
//		case 2:
//			printf("������������������");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", sub1(a, b));
//			break;
//		case 3:
//			printf("������������������");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", mul1(a, b));
//			break;
//		case 4:
//			printf("������������������");
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

//���ಿ�ַ�װ
//void Calc(int (*pf)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	printf("������������������");
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
//		printf("��ѡ��\n");
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

//����ָ���������ʽ�򻯴���--ת�Ʊ�
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int(*parr[5])(int, int) = { 0,add1,sub1,mul1,div1 };
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
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

//ָ����ָ�������ָ��

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	int (*pf)(int);//����ָ��
//
//	int (*pfarr[5])(int);//  pfarr��һ������ ����ָ�����飬�����5������ָ��
//	//ppfarr��һ��ָ�򡾺���ָ�����顿��ָ��
//	int(*(*ppfarr)[5])(int)=&pfarr;//ppfarr��һ������ָ�룬ָ��ָ���������5��Ԫ�أ�
//	//ָ�������ÿ��Ԫ��������int(*  )(int)��һ������ָ��
//}

//�ص�����



//void print(char* str)//print�������ǻص���������ֱ�����ã�ͨ��ָ����ʸú���
//{
//	printf("%s", str);
//}
//
//void test(void (*p)(char*))//p->print�����ĵ�ַ
//{
//	printf("test\n");
//	p("haha");
//}
//int main()
//{
//	test(print);//����ȥprint�����ĵ�ַ
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