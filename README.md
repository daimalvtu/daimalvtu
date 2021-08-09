#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
//	int day = 4;
//	//scanf("%d", &day);
//	//day = day % 7;
//	switch (day)
//	{ 
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3+1:
//		printf("星期三\n");
//		break;
//	case 8:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 0:
//		printf("星期七\n");
//
//	}
	///*int n = 1;
	//int m = 2;
	//switch (n)
	//{
	//case 1:
	//	n++;
	//case 2:
	//	m++;
	//case 3:
	//switch (n)
	//{
	//case 1:
	//	n++;
	//case 2:
	//	n++;
	//	m++;
	//	break;
	//}
	//case 4:
	//	m++;
	//default:
	//	break;
	//}
	//printf("%d,%d\n", m, n);
	int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		//break;
	//		continue;
	//	printf("%d\n", i);
	//	i++;
	//}
	/*int ch = 0;
	while((ch=getchar())!=EOF)
	putchar(ch);
	printf("%c\n", ch);*/
	int re = 0;
	char parword[20] = { 0 };
	printf("请输入密码");
	scanf("%s", &parword);
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
	}
	printf("请确认：（n/y）");
	re = getchar();
	if (re == 'n')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	//printf("%s\n", parword);

return 0; 
}
