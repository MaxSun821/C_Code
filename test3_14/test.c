#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
	ѡ����䣺if-else/switch-case
//*/
//int main()
//{
//	int a = 3;
//	int b = 6;
//	if (a < b)
//		printf("%d\n", b);
//	else
//		printf("%d\n", a);
//	printf("%d\n", a > b ? a : b);
//	return 0;
//}

/*
	ѭ����䣺while/for/do-while
*/
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		printf("%d ", i);//1 2 3 4 5 6 7 8 9 10
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);//0 1 2 3 4 5 6 7 8 9
//	}
//	return 0;
//}

/*
	���� = java�еķ���
*/
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//}

/*
	ָ�� = ��ַ
*/
//int main()
//{
//	int a = 10;
//	&a;//��aȡ��ַ
//	int* pa = &a;//&-ȡ��ַ������
//	*pa = 20;//*-�����ò�������*pa���Ƿ���a
//	printf("%d\n", a);
//	return 0;
//}

/*
	�ṹ�� = java�е��������
	����ṹ��
*/
struct Stu//�����һ��ѧ���ṹ��
{
	char name[10];
	int age;
	double score;
};
int main()
{
	struct Stu s = { "Max", 29, 100 };//�����һ��s�ṹ�����
	printf("%s %d %lf\n", s.name, s.age, s.score);//���ʽṹ���Ա����
	struct Stu* ps = &s;
	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);
	return 0;
}