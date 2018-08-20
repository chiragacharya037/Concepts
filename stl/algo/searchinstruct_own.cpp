#include <iostream>
#include <algorithm>
#include <vector>

class data
{
	public:
	data(int x,int y): a(x),b(y){}
	int a;
	char b;
};
bool comparedata(data tmp1,data tmp2)
{
	return tmp1.a==tmp2.a;
}
int main()
{
	data a(1,'a');
	data b(2,'b');
	std::vector<data> mydata;
	mydata.push_back(a);
	mydata.push_back(b);
	data c(3,'a');
	std::vector<data> searchdata;
	searchdata.push_back(c);

	std::vector<data>::iterator itr = std::search(mydata.begin(),mydata.end(),searchdata.begin(),searchdata.end(),comparedata);
	if(itr != mydata.end())
	{
		std::cout<<"data matched\n";
	}
	else
	{
		std::cout<<"data not matched\n";
	}
return 0;
}
