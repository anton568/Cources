#include <stdio.h>
#include <ctype.h>
char* transfiguration(char str[], int razmer)
{
	int timer = 0;
	int timerspace = 0;
	for (int i = 0; i < razmer; i++)
	{
		if (isspace(str[i]) && ((i < (razmer - timer))))
		{
			if (isspace(str[i + 1]))
			{
				for (int m = i + 1; m < (razmer - 1); m++)
				{
					str[m] = str[m + 1];
				}
				timer++;
				str[razmer - 1] = ' ';
				i--;
			}
		}
	}
	for (int i = 0; i < razmer; i++)
	{
		if (isspace(str[i]))
		str[i] = ' ';
	}
	char* str1 = str;
	return str1;
}
int main()
{
	char str[] = "Hello\t\nAnton";
	int razmer = sizeof(str) / sizeof(char);
	char* str1= transfiguration(str, razmer);
	for (int i = 0; i < sizeof(str)/sizeof(char); i++)
	{
		printf("%c", *(str1+i));
	}
	getchar();
}