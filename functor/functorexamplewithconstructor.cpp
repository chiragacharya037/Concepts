#include <iostream>
#include <string>

class FunctorClass
{
public:
	FunctorClass(int var):id (var) {}
	void operator () (std::string rcvd)
	{
		std::cout<<"functor string :"<<rcvd<<std::endl;
		std::cout<<"int is :"<<id<<std::endl;
	}
private:
	int id;
};

int main ()
{
	FunctorClass (1234)("hello");
	return 0;
}
