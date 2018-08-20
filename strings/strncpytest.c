#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	const char * source = "QWERTY";
	char dest[3];
	//dest = (char *)malloc(3*sizeof(char));
	/*copy operation*/
	strncpy(dest,source,sizeof(dest)-1);
	dest[sizeof(dest)-1]='\0';
	printf("size of dest is :%d \n",sizeof(dest));
	printf("Source:%s \n",source);
	printf("Dest:%s \n",dest);
}
