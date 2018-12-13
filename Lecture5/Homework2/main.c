#include <stdio.h>
#include "Stack.h"

int main()
{
	Node* top = NULL;

	push(&top, '(');
	push(&top, '[');
	push(&top, '{');
	getValue(top);
	while (!isEmpty(top))
		printf("%c\n", pop(&top));
	getchar();
	return 0;
}
