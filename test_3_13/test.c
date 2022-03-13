#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()//主函数
//{
//	printf("Hello World!!!\n");//printf - 库函数，需要调用stdio.h
//
//	return 0;
//}

//一个工程只能有一个主函数。

/*
	数据类型：
	char/short/int/long/long long/float/double
*/

//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	return 0;
//}

/*
	定义一个变量 - 数据类型 变量名 = 赋值
	变量的分类：局部变量、全局变量

	%d - 整型
	%lf - double
	%f - float
	%s - char
*/

//int main()
//{
//	int age = 20;
//	double weight = 60.4;
//
//	age++;
//	printf("%d\n", age);
//	weight -= 10;
//	printf("%lf\n", weight);
//
//	return 0;
//}

/*
	求两个变量的和
	scanf - 输入函数
*/

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	return 0;
//}

/*
	变量的生命周期和作用域
*/

//extern int g_val;//定义外部变量
//int main()
//{
//	int b = 70;
//	{
//		int a = 10;
//		printf("%d\n", a);
//		printf("%d\n", b);
//	}
//	printf("%d\n", g_val);
//
//	return 0;
//}


/*
	常量：
		字面常量
		const修饰的常变量
		#define定义的标识符常量
		枚举常量
*/

//int main()
//{
//	const int num = 10;
//	num = 20;
//
//	const int n = 10;
//
//	int arr[10] = { 0 };
//	int arr2[n] = { 0 };
//	return 0;
//}

//enum SEX
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}

/*
	字符串和转义字符
*/
int main()
{
	/*printf("%s\n", "'");*/

	printf("\a");
	return 0;
}
