#include <iostream>     // std::cout
#include <tuple>        // std::tuple, std::get, std::tie, std::ignore

int main ()
{
  int a=1,b=2;
  std::cout<<a<<" "<<b<<std::endl;
  std::tie(a,b) = std::make_tuple(b,a);
  std::cout<<a<<" "<<b<<std::endl;
  return 0;
}
