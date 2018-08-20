#include <stdio.h>
int main()
{
	int a = 1;
	unsigned int b = 2;

	int c = -1;
	unsigned int d = 1;

	if(a>b)
	{
		printf("a>b \n");
	}
	else
	{
		printf("a<=b \n");
	}
	if(c>d)
	{
		printf("c>d \n");
	}
	else
	{
		printf("c<=d \n");
	}
	if((int)c > (int)d)
	{
                printf("c>d \n");
        }
        else
        {
                printf("c<=d \n");
        }
	return 0;
}
