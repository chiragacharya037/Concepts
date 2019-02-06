#include <iostream>
#include <vector>
int main()
{
    // Iterating over whole array
    std::vector<int> v = {0, 1, 2, 3, 4, 5};
    for (auto i : v)
    {
        std::cout << i << ' ';
	i=10;
    }
    std::cout << std::endl;
    std::cout << v[3]<<std::endl;
    return 0;
}
