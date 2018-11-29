#include <stdio.h>
#include <string.h>
char * strcat(char * destptr, const char * srcptr);

char * mystrcpy(char * copyout, const char * copyin)
{
	int len = 0;
	while ((*(copyin + len)) != '\0')
	{
		*(copyout + len) = *(copyin + len);
		len++;
	}
	*(copyout + len+1) = *(copyin + len+1);
	return copyout;
}
char* mystrchr(const char * strg, int number)
{
	int len = 0;
	while (*(strg + len) != '\0')
	{
		if (number == (int)*(strg + len))
			return (strg + len);
		else
			len++;
	}
	return NULL;
}
int mystrcmp(const char * string1, const char * string2)
{
	int len = 0;

	while (((*(string1 + len)) != '\0') && ((*(string2 + len)) != '\0'))
	{
		if ((*(string1 + len)) > (*(string2 + len)))
		{
			return 1;
		}
		else if ((*(string1 + len)) < (*(string2 + len)))
		{
			return -1;
		}

		len++;
	}
	return 0;
}
size_t mystrlen(const char* massiv)

{
	size_t len = 0;
	while((*(massiv+len))!='\0')
	len++;
	return len;
}
int main()
{
	char massiv[]="555555";
	char str1[] = "2322222";
	char str2[] = "2222222";
	char strg[] = "123456";
	char cyin[] = "Hello World";
	char cyout[] = "           ";
	char in1[] = "Good";
	char in2[] = "Bye";
	char tempin[11];
	for (int i = 0; i < strlen(tempin); i++)
	{
		tempin[i] = ' ';
	}
	int count=0;
	const char* pt1 = str1;
	const char* pt2 = str2;
	const char* pointer = massiv;
	const char* pntr = strg;
	const char* pr1 = cyin;
	const char* pr2 = cyout;
	size_t length = mystrlen(pointer);
	int diff = mystrcmp(pt1, pt2);
	char* ukazatel = mystrchr(pntr, '3');
	char* ptr = mystrcpy(pr2, pr1);
	while(*(ptr+count)!='\0')
	{ printf("%c", *(ptr + count));
	count++;
	}
	printf("%p", ukazatel);
	printf("%i", diff);
	printf("%u", length);
	getchar();
}