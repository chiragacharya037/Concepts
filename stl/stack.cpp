#include <iostream>
#include <stack>
template<class mytype>
void printStack( std::stack <mytype> obStack)
{
	std::stack <mytype> g = obStack;
    	while (!g.empty())
    	{
        	std::cout << '\t' << g.top();
        	g.pop();
    	}
    	std::cout << '\n';
}

int main()
{
	std::stack <int> intStack;
	std::stack <float> floatStack;
	floatStack.push(2.34);
	floatStack.push(5.67);
	intStack.push(2);
	intStack.push(4);
	intStack.push(6);
	intStack.push(8);
	intStack.push(10);
	printStack(intStack);
	printStack(floatStack);
	std::cout << '\t' << intStack.top() << std::endl;
	intStack.pop();
	printStack(intStack);
	return 0;
}
