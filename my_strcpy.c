/****************************Implementation of strcpy function********************/

#include<stdio.h>

void my_strcpy(char *src,char *des);

int main()
{
	char src[100],des[100];
	printf("Enter the string:");
	scanf("%[^\n]%*c",src);
	my_strcpy(src,des);
	printf("The string after copying : %s\n",des);
	return 0;
}

void my_strcpy(char *src,char *des)
{
	int i=0;
	while(src[i] != '\0')
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
}
