#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
	选择语句：if-else/switch-case
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
	循环语句：while/for/do-while
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
	函数 = java中的方法
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
	指针 = 地址
*/
//int main()
//{
//	int a = 10;
//	&a;//对a取地址
//	int* pa = &a;//&-取地址操作符
//	*pa = 20;//*-解引用操作符，*pa就是访问a
//	printf("%d\n", a);
//	return 0;
//}

/*
	结构体 = java中的面向对象
	创造结构体
*/
struct Stu//创造出一个学生结构体
{
	char name[10];
	int age;
	double score;
};
int main()
{
	struct Stu s = { "Max", 29, 100 };//创造出一个s结构体变量
	printf("%s %d %lf\n", s.name, s.age, s.score);//访问结构体成员变量
	struct Stu* ps = &s;
	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);
	return 0;
}