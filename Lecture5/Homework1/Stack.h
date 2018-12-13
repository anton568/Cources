#include <stdbool.h>
typedef struct Node {
	char info[100];
	int size;
}Node;
void s_push(Node* Stack, char x);
char pop(Node *Stack);
