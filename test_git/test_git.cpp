// test_git.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main()
{
	char name[80];
	printf("Enter your name:");
	scanf("%s", name);
	printf("\n-----------------------------------------\n");
	printf("Hello, %s! This is test git program.", name);
	printf("\n-----------------------------------------\n");
	printf("Press any key for exit...\n");
	_getch();
}

