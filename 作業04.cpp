#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int a, b, c,x;
	printf("請輸入秒數:");
	scanf("%d",&x);
	a = x / 3600;
	b = x % 3600 / 60;
	c = x % 3600 % 60;
	printf("%d時%d分%d秒", a,b,c);

	system("pause");
	return 0;
    }