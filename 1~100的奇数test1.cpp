#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	while(i<=100)
	{
		if(i%2!=0)//if (i % 2 == 1)
			printf("%d\n", i);
		//i++;
		//i = i + 2, i += 2;
	}
	;
	return 0;
}