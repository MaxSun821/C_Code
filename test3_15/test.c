#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
	��֧��䣺if-else/switch-case
*/
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else if (age < 30)
//	{
//		printf("����\n");
//	}
//	else if (age < 60)
//	{
//		printf("����\n");
//	}
//	else if (age < 100)
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)//a����������
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//}

int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
}