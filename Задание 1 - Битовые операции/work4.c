#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0;
	int b = 0;

	scanf("%d", &a);

	for (int i = 7; i >= 0; i--)
	{
		printf("%d", 1 & (a >> i));
	}

	scanf("%d", &b);

	if (b == 1)
	{
		a |= 1 << 2;
	}

	else if (b == 0)
	{
		a &= ~(1 << 2);
	}


	for (int i = 7; i >= 0; i--)
	{
		printf("%d", 1 & (a >> i));
	}

	return 0;
}