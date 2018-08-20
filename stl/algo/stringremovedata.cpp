#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
void removechar(char* arr, char x)
{
	auto newEnd = std::remove(arr, arr+10, x);
	*newEnd = '\0';
}
int main()
{
	char * mystr = new char[10];
	strcpy(mystr,"asdfgasdfg");
	printf("%s\n",mystr);
	removechar(mystr,'a');
	printf("%s\n",mystr);
	return 0;
}
