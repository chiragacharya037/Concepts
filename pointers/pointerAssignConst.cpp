#include <iostream>
#include <string>

int main()
{
	int x=1;
	int *a=&x;
	std::cout<<*a<<std::endl<<a<<std::endl;
}
