#include <stdio.h>

typedef void(*func_t)(int, char);

void Cross(int a, char symbol)
{
	int p = 0;
	for (int i = 0; i < ((a - 1) / 2); i++)
	{
		for (int q = 0; q < i; q++)
			printf(" ");
		printf("%c", symbol);

		for (int m = 0; m < (a - 2 - p); m++)
			printf(" ");
		printf("%c", symbol);
		printf("\n");
		p = p + 2;
	}
	if ((a - (a / 2) * 2) == 1)
	{
		for (int i = 0; i < ((a - 1) / 2); i++)
			printf(" ");
		printf("%c", symbol);
		printf("\n");
	}
	else
	{
		for (int e = 0; e < 2; e++)
		{
			for (int i = 0; i < ((a - 1) / 2); i++)
				printf(" ");
			printf("%c", symbol);
			printf("%c", symbol);
			printf("\n");
		}
	}
	for (int i = ((a - 1) / 2); i > 0; i--)
	{
		for (int q = 0; q < i - 1; q++)
			printf(" ");
		printf("%c", symbol);

		for (int m = (a - 2 - p); m > -2; m--)
			printf(" ");
		printf("%c", symbol);
		printf("\n");
		p = p - 2;
	}
}

void HollowDiamond(int a, char symbol)
{
	int p = 0;
	for (int i = 0; i < ((a - 1) / 2); i++)
		printf(" ");
	printf("%c", symbol);
	printf("\n");
	for (int i = ((a - 1) / 2); i > 0; i--)
	{
		for (int q = 0; q < i - 1; q++)
			printf(" ");
		printf("%c", symbol);

		for (int m = 0; m < 1 + p; m++)
			printf(" ");
		printf("%c", symbol);
		printf("\n");
		p = p + 2;
	}
	if ((a - (a / 2) * 2) == 0)
	{
		printf("%c", symbol);
		for (int m = 0; m < p - 1; m++)
			printf(" ");
		printf("%c", symbol);
		printf("\n");
	}
	for (int i = 0; i < ((a - 1) / 2) - 1; i++)
	{
		for (int q = 0; q < i + 1; q++)
			printf(" ");
		printf("%c", symbol);

		for (int m = 0; m < p - 3; m++)
			printf(" ");
		printf("%c", symbol);
		printf("\n");
		p = p - 2;
	}
	for (int i = 0; i < ((a - 1) / 2); i++)
		printf(" ");
	printf("%c", symbol);
	printf("\n");
}

void FilledDiamond(int a, char symbol)
{
	int p = 0;
	for (int i = 0; i < ((a - 1) / 2); i++)
		printf(" ");
	printf("%c", symbol);
	printf("\n");
	for (int i = ((a - 1) / 2); i > 0; i--)
	{
		for (int q = 0; q < i - 1; q++)
			printf(" ");
		for (int m = 0; m < 2 + p; m++)
			printf("%c", symbol);
		printf("%c", symbol);
		printf("\n");
		p = p + 2;
	}
	p;
	if ((a - (a / 2) * 2) == 0)
	{
		for (int m = 0; m < p; m++)
			printf("%c", symbol);
		printf("%c", symbol);
		printf("\n");
	}
	for (int i = 0; i < ((a - 1) / 2) - 1; i++)
	{
		for (int q = 0; q < i + 1; q++)
			printf(" ");
		for (int m = 0; m < p - 2; m++)
			printf("%c", symbol);
		printf("%c", symbol);
		printf("\n");
		p = p - 2;
	}
	for (int i = 0; i < ((a - 1) / 2); i++)
		printf(" ");
	printf("%c", symbol);
	printf("\n");
}

int main()
{
	int a = 0;
	int b = 0;
	char symbol = '0';
	printf("Enter number a figure\n");
	printf("1.Cross\n");
	printf("2.Hollow diamond\n");
	printf("3.Filled diamond\n");
	scanf_s("%d", &b);
	getchar();
	printf("Enter size a figure\n");
	scanf_s("%d", &a);

	getchar();
	printf("Enter symbol\n");
	symbol = getchar();
	getchar();
	func_t Figure[3] = { Cross, HollowDiamond,FilledDiamond };
	Figure[b-1](a, symbol);
	getchar();
	getchar();
}