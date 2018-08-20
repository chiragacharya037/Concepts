#include <iostream>
#include <stdlib.h>
#include <vector>
#include <stdexcept>

template<class T>
class Stack {
public:
    Stack(const std::initializer_list<T>& i):elem(i) {}
    int size() const { return elem.size(); }
    bool empty() const { return elem.empty();}
    void push(const T&);
    T pop();
    T peek();
private:
    std::vector<T> elem;
};


template<class T>
void Stack<T>::push(const T& t) {
    elem.push_back(t);
}

template<class T>
T Stack<T>::pop() {
    if (empty()) {
        throw std::out_of_range("underflow");
    }
    auto x = elem.back();  
    elem.pop_back();
    return x;
}

template<class T>
T Stack<T>::peek() {
    if (empty()) {
        throw std::out_of_range("underflow");
    }
    return elem.back();
}

template<class mytype>
void printStack( Stack <mytype> obStack)
{	
        Stack <mytype> g = obStack;
        while (!g.empty())
        {
                std::cout << "\t" << g.peek();
                g.pop();
        }
        std::cout << '\n';
}

int main()
{
        Stack <int> intStack;
        Stack <float> floatStack;
        floatStack.push(2.34);
        floatStack.push(5.67);
        intStack.push(2);
        intStack.push(4);
        intStack.push(6);
        intStack.push(8);
        intStack.push(10);
        printStack(intStack);
        printStack(floatStack);
//        std::cout << '\t' << intStack.top() << std::endl;
        intStack.pop();
        printStack(intStack);
	return 0;
}
