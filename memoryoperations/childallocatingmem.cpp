#include <stdio.h>
#include <stdlib.h>

class base{

public:
	char * test;
};

class child:public base{
public:
	int memAllocatingFun();
};

int child::memAllocatingFun()
{
	test = new char (10);
	printf("after :%d \n",test);
	test = new char (20);
	printf("after :%d \n",test);
}
int main()
{
	child * objChild= new child ();
	objChild->memAllocatingFun();
	return 0;
}
