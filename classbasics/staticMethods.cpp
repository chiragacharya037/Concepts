#include <stdio.h>

class myBaseClass
{
	private:
	static int num;
	public:
	static int print()
	{
		printf("hello from base static method \n");
		num=1;
	}
};

int main()
{
	int a;
	myBaseClass objmyBaseClass;
	myBaseClass::print();
	objmyBaseClass.print();
	return 0;
}
