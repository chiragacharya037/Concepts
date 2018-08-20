#include <iostream>
#include <string>

class FunctorClass
{
public:
	void operator () (std::string rcvd)
	{
		std::cout<<"functor string :"<<rcvd<<std::endl;
	}
};

int main ()
{
	FunctorClass objFunctorClass;
	objFunctorClass("hello");
	return 0;
}
