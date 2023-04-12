#include <iostream>

// comment 1 changed
int
main()
{
  // comment 2 changed
  std::string name;
  std::cout << "Please enter your name: ";
  std::cin >> name;
  std::cout << "Hello world from @" << name << std::endl;
  return 0;
}
