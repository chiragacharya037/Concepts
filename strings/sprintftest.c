#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	char source[10] = "123456789";
	char dest[9];
	int ret;
	ret = snprintf(dest,sizeof(dest),"%s",source);
	printf("source : %s\n",source);
	printf("dest : %s\n",dest);
	if(ret < 0)
	{
		printf("ret is negative \n");
	}
	else if((ret > 0) && (ret >= sizeof(dest)))
	{
		printf("buff size not enough \n");
	}
	else
	{
		printf("ret non zero and size less than dest\n");
	}
}
