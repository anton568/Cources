#include <stdio.h>
#include "Stack.h"

int main()
{
	/*char s[99];
	printf ("Enter expression with parentheses\n");
	gets(s);
	//int tempcorrect=-1;
	//int i = 0;
	//tempcorrect = expressioncorrect(s);
	if(expressioncorrect(s))
		printf("Expression correct\n");
	else 
		printf("Expression incorrect\n");
	getchar();
	return 0;
	*/


	char openpare[3] = { '(','{','[' };
	char closepare[3] = { ')','}',']' };
	char s[99], temp;
	int i, k, OK;
	Node Stack;
	printf("Enter expression with parentheses\n");
	gets(s);
	Stack.size = 0;
	OK = 1;
	for (i = 0; OK && (s[i] != '\0'); i++)
	{
		for (k = 0; k < 3; k++)
		{
			if (s[i] == openpare[k])
			{
				s_push(&Stack, s[i]);
				break;
			}
			if (s[i] == closepare[k])
			{
				temp = pop(&Stack);
				if (temp != openpare[k])
					OK = 0;
				break;
			}
		}
	}
		if (OK && (Stack.size == 0))
			printf("Expression correct\n");
		else printf("Expression incorrect\n");
		getchar();
		return 0;
}