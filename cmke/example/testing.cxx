#include <iostream>
#include <string>

#include "sqrt.h"
#include "square.h"

int main(int argc, char* argv[])
{ if (argc !=2) {
    std::cout << "Too less or Too few Arguments passed, 1 required" << std::endl;
    return 0;
  }
  const double inputValue = std::stod(argv[1]);

  const double outputValue = stat::sqrt(inputValue);
  const double outputValue2 = share::square(inputValue);
  std::cout << "\n\nThe square root of " << inputValue << " is " << outputValue << std::endl;
  std::cout << "\n\nThe square of " << inputValue << " is " << outputValue2 << std::endl;
  return 0;
}
