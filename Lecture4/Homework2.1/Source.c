#include <stdio.h>
#include <string.h>
#include <ctype.h> 
char* findname(char path[], char temp[])
{
	int flag = 0;
	for (int i = 0; i < strlen(path)-1; i++)
		if ((path[i] == '/') || (path[i] == '\\'))
			flag = i;
	for (int i = flag + 1; i < strlen(path) + 1; i++)
		temp[i-flag-1] = path[i];
	char* a = temp;
	return a;
}
int main()
{
	char path[] = "Hello worl/d";
	for (int i = 0; i < strlen(path); i++)
		printf("%c", path[i]);
	char temp[101];
	printf("\n");
	char* name = findname(path, temp);
	for (int i = 0; i < strlen(temp); i++)
		printf("%c", *(name+i));
	getchar();
}