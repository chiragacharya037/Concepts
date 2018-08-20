#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printlen(char * tmp)
{
	printf("%d \n",sizeof(tmp));
}

void main()
{
	char ip[15]={'\0'};
	printlen(ip);
}
