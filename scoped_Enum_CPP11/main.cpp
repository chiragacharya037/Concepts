#include <iostream>
#include <type_traits>
#include <string>
enum class Animal{Dog,Tiger,Lion};
enum class Pet{Cat,Dog};

template <typename Enumeration>
auto as_integer(Enumeration const value)
    -> typename std::underlying_type<Enumeration>::type
{
    return static_cast<typename std::underlying_type<Enumeration>::type>(value);
}

int main()
{
	std::cout<<as_integer(Animal::Dog)<<" "<<as_integer(Pet::Dog)<<std::endl;
	return 0;
}
