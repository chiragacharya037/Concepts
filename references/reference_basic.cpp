#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=2;
int &x;
{
	int b=5;
	&x=b;
	printf("local x :%d\n",x);
}
printf("a=%d, x holds ref of:%d \n\n",a,x);
return 0;
}
