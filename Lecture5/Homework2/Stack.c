#include "Stack.h"
#include <stdlib.h>

Node* push(Node** pTop, info_t value)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->info = value;
	newNode->prev = *pTop;
	*pTop = newNode;
	return newNode;
}


info_t pop(Node** pTop)
{
	Node* oldTop = *pTop;
	info_t info = oldTop->info;

	*pTop = (*pTop)->prev;
	free(oldTop);
	return info;
}

info_t getTopValue(Node* top)
{
	return top->info;
}

void getValue(Node* top)
{
	Node* temp = top;
	while ((temp->prev) != NULL)
	{
		printf("%c", (temp->info));
		temp = temp->prev;
	}
	printf("%c", (temp->info));
}

bool isEmpty(Node* top)
{
	return top == NULL;
}