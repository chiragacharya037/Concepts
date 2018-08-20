#include <stdio.h>
#include <string>

int main()
{
	std::string a = "";
	std::string b = "a";
	printf("size of str is %d , emptiness status %d \n",(int)a.size(),a.empty());
	printf("size of str is %d , emptiness status %d \n",(int)b.size(),b.empty());
	a.clear();
	printf("size of str is %d , emptiness status %d \n",(int)a.size(),a.empty());
}
