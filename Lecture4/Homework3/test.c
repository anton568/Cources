#include <stdio.h>
#include <ctype.h>
#include <string.h>

int test(char number[])
{
	int res = 0;
	int count = 0;
	int temp = 0;
	int negative = 0;
	if (number[0] == '-')
	{
		negative = 1;
	}
	if ((number[0] != '-') && (!(isdigit(number[0]))))
	{
		printf("error");
		return 0;
	}
	else
	{
		for (int i = 0; i < (int)strlen(number)-1; i++)
		{
			if (isdigit(number[i]))
				count++;
		}
		for (int i = 1; i < (int)strlen(number)-1; i++)
		{
			if ((!(isdigit(number[i]))) && (!(isspace(number[i]))) && (number[i] != '\0'))
			{
				printf("error");
				return 0;
			}
			if (number[i] == '\0')
				temp = i;
		}
		for (int i = 0; i < temp; i++)
		{
			if (number[i] == ' ')
			{
				printf("error");
				return 0;
			}
		}
			if (negative == 1)
			{
				for (int i = 1; i < count + 1; i++)
				{
					res = res * 10 + number[i] - '0';
				}
				res = -1 * res;
			}
			else
			{
				for (int i = 0; i < count; i++)
				{
					res = res * 10 + number[i] - '0';
				}
			}
			printf(" %i", res);
			return res;
	}
}
int main()
{

	char buffer[12];
	printf("Enter a string with spaces: ");
	fgets(buffer, 12, stdin);
	printf("Your input is: %s", buffer);
	int res = test(buffer);
	getchar();
	return 0;
}