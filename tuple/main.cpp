#include <iostream>     // std::cout
#include <tuple>        // std::tuple, std::get, std::tie, std::ignore

int main ()
{
  std::tuple<int,char> foo (10,'x');
  auto bar = std::make_tuple ("test", 3.1, 14, 'y');
  std::cout << std::get<2>(bar) << std::endl;
  std::get<2>(bar) = 100;                                    // get and modify element
  std::cout << std::get<2>(bar) << std::endl;
  int myint; char mychar;

  std::tie (myint, mychar) = foo;                            // unpack elements
  std::cout << myint << ' ' << mychar << std::endl;
  std::tie (std::ignore, std::ignore, myint, mychar) = bar;  // unpack (with ignore)
  std::cout << myint << ' ' << mychar << std::endl;
  mychar = std::get<3>(bar);

  std::get<0>(foo) = std::get<2>(bar);
  std::get<1>(foo) = mychar;

  std::cout << "foo contains: ";
  std::cout << std::get<0>(foo) << ' ';
  std::cout << std::get<1>(foo) << '\n';

  return 0;
}
