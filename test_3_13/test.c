#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()//������
//{
//	printf("Hello World!!!\n");//printf - �⺯������Ҫ����stdio.h
//
//	return 0;
//}

//һ������ֻ����һ����������

/*
	�������ͣ�
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
	����һ������ - �������� ������ = ��ֵ
	�����ķ��ࣺ�ֲ�������ȫ�ֱ���

	%d - ����
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
	�����������ĺ�
	scanf - ���뺯��
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
	�������������ں�������
*/

//extern int g_val;//�����ⲿ����
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
	������
		���泣��
		const���εĳ�����
		#define����ı�ʶ������
		ö�ٳ���
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
	�ַ�����ת���ַ�
*/
int main()
{
	/*printf("%s\n", "'");*/

	printf("\a");
	return 0;
}
