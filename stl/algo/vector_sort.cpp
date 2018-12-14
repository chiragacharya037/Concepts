/*
Author 			: Chirag Acharya
Date			: 14 Dec 2018
Compile instruction 	: g++ vector_sort.cpp --std=c++11
Brief			: This code illustrates example of sort in ascending order and descending order
*/

#include <vector>
#include <iostream>
#include <algorithm>

void print(std::vector<int> &tmp)
{
	for(auto i:tmp)
        {
                std::cout<<i<<" ";
        }
	std::cout<<std::endl;
}
int main()
{
	std::vector<int> myvect{1,4,7,2,5};
	print(myvect);

	/*normal sort*/
	std::sort(myvect.begin(),myvect.end());
	print(myvect);

	/*Reverse sort*/
	std::sort(myvect.begin(),myvect.end(),[](int a,int b){return a>b;});
	print(myvect);


	return 0;
}
