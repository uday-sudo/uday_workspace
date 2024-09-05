#include <cmath>
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
  const double inputValue = std::stod(argv[1]);

  const double ans = inputValue*inputValue;
  std::cout << "The square of " << inputValue << " is " << std::endl;
  return 0;
}
