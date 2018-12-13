#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
typedef struct Node
{
	char data;
	struct Node *next, *prev;
}Node;

typedef struct Stack {
	struct Node *Head, *Tail;
}Stack;

void Push(Stack* s, char x)
{
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	newNode->data = x;
	newNode->next = s->Head;
	newNode->prev = NULL;
	if (s->Head) 
		(s->Head)->prev = newNode;
	s->Head = newNode;	if (!s->Tail) s->Tail = s->Head;
}
char Pop(Stack* s)
{
	Node* topNode = s->Head;
	char i = ' ';
	if (!(topNode))
		return i;
	char x = topNode->data;
	s->Head = topNode->next;
	if (s->Head)
		(s->Head)->prev = NULL;
	else
		s->Tail = NULL;
	free(topNode);
	return x;

}
void main()
{
char openpare[3] = { '(','{','[' };
char closepare[3] = { ')','}',']' };
int k, OK;
int n = 100;
int i = 0;
char temp;
Stack Stack;
Stack.Head = NULL;
OK = 1;
long w = 0;
char ch, *s = (char*)malloc(sizeof(char));
printf("Enter ");
while ((ch = getchar()) != '\n')
{
	s[w] = ch;
	w++;
}
s[w] = '\0';
for (w = 0; OK&&(s[w] != '\0'); w++)
{
		for (k = 0; k < 3; k++)
		{
			if (s[w] == openpare[k])
			{
				Push(&Stack, s[w]);
				i++;
				break;
			}
			if (s[w] == closepare[k])
			{
				temp = Pop(&Stack);
				i--;
				if (temp != openpare[k])
					OK = 0;
				break;
			}
		}
}
if (OK && (i == 0))
printf("Expression correct\n");
else printf("Expression incorrect\n");
getchar();
}