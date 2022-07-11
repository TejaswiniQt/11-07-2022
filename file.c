/********************File operartions**********************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *ptr;
	ptr = fopen("text.txt","w+");
	if(ptr == NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	} 
	char name[30];
	printf("Enter the name:");
	scanf("%[^\n]%*c",name);
	fputs(name,ptr);
	return 0;
}

