#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])//
{
	//argc = 1;
	//argv[0] = "Project1.exe";
	//argv[1] = "aa.txt";
	//char* namefilesinput = "test.txt";
	//char* namefilesoutput = "out.txt";
	/*if (argc == 2)
	{
		char* namefilesinput = argv[1];
	}
	if (argc == 3)
	{
		char* namefilesinput = argv[1];
		char* namefilesoutput = argv[2];
	}*/
	if (argc == 1)
	{
		argv[1]= "test.txt";
		argv[2] = "out.txt";
	}
	if (argc == 2)
	{
		argv[2] = "out.txt";
	}
	//printf("%s", namefilesinput);
	//printf("%s", namefilesoutput);
	printf("%s", argv[0]);
	printf("%s", argv[1]);
	printf("%s", argv[2]);
	printf("%i", argc);
	FILE *myFile;
	FILE *Out;
	FILE *MyFileDublicate;
	char* symbol = (char*)malloc(sizeof(char) * 10000);
	char* dublicate = (char*)malloc(sizeof(char) * 10000);
	int i=0;
	int count = 0;
	//myFile = fopen(namefilesinput, "r");
	myFile = fopen(argv[1], "r");
	
	MyFileDublicate = fopen("HackerLanguageSymbol.txt", "r");
	//Out = fopen(namefilesoutput, "w");
	Out = fopen(argv[2], "w");
	while (!feof(MyFileDublicate))
	{
		fscanf(MyFileDublicate, "%c", &dublicate[i]);
		
		if ((dublicate[i] == ' ') || (dublicate[i] == '\n'))
		{
			i--;
			count--;
		}
		i++;
		count++;
	}
	
	count--;
	for (int i = 0; i < count; i++)
	{
		printf("%c", dublicate[i]);
	}
	printf("\n");
	i=0;
	srand(time(NULL));
	while (fscanf(myFile, "%c", &symbol[i]) == 1) 
	{
		for (int z = 0; z < count; z=z+2)
		{
			if (((rand()) % 100) > 55)
			{
				if (symbol[i] == dublicate[z])
					symbol[i] = dublicate[z + 1];
			}
		}
		printf("%c", symbol[i]);
		fprintf(Out, "%c", symbol[i]);
		i++;
	}
	fclose(myFile);
	fclose(Out);
	getchar();
}