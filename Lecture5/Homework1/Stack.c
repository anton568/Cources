#include "Stack.h"
#include <stdlib.h>
void s_push(Node* Stack, char x)
{
	if(Stack->size==100)
	{
		printf("Stack crowded");
		return;
	}
	Stack->info[Stack->size] = x;
	(Stack->size)++;
}
char pop(Node* Stack)
{
	char i = ' ';
	if (Stack->size == 0)
	{
		return i;
	}
	(Stack->size)--;
	return Stack->info[Stack->size];
}

/*int expressioncorrect(char* s)
{
	char openpare[3] = { '(','{','[' };
	char closepare[3] = { ')','}',']' };
	char temp;
	int i, k, OK;
	Node Stack;
	Stack.size = 0;
	OK = 1;
	for (i = 0; OK && (*(s+i) != '\0'); i++)
	{
		for (k = 0; k < 3; k++)
		{
			if (*(s + i) == openpare[k])
			{
				s_push(&Stack, *(s + i));
				break;
			}
			if (*(s + i) == closepare[k])
			{
				temp = pop(&Stack);
				if (temp != openpare[k])
					OK = 0;
				break;
			}
		}
	}
	if (OK && (Stack.size == 0))
		return 1;
	else return 0;
}
*/