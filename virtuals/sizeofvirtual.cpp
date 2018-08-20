#include <stdio.h>
#include <stdlib.h>

class base
{
	public:
	int a;
	virtual void myFun();
	~base();
};

base::~base()
{

}
class derived : public base
{
	public:
	int x;
	int y;
	int z;
	void myFun();
};
void base::myFun()
{
	printf("base myFun called\n");
}
void derived::myFun()
{
	printf("derived myFun called \n");
}
int main()
{
	base b;
	base *b1 = new (derived);
	derived d;
	printf("size of base obj is : %ld \n",sizeof(b));
	printf("size of derived obj is : %ld \n",sizeof(*b1));
	printf("size of derived 2 is : %ld \n",sizeof(d));
	b.myFun();
	b1->myFun();
	return 0;
}
