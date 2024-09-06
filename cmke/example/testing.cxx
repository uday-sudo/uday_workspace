#include <iostream>
#include <string>
#include <fstream>

#include "sqrt.h"
#include "square.h"
#include "MathFunctions.h"

int main(int argc, char* argv[])
{ if (argc ==2) {
    const double inputValue = std::stod(argv[1]);
    const double outputValue = mathfunctions::sqrt(inputValue);//stat::sqrt(inputValue);
    const double outputValue2 = share::square(inputValue);
    std::cout << "\nThe root of " << inputValue << " is " << outputValue << " and square is " << outputValue2 << std::endl;
    return 0;
  }
  else if (argc != 1) {
    std::cout << "Too Much arguments requires 0 or None" << std::endl;
    return 1;
  }

  std::cout << argv[0] << std::endl;
  std::ifstream inputFile("./files/nums.txt"); 

  if (!inputFile.is_open()) { 
    std::cout << "Error opening the file!" << std::endl; 
    return 1; 
  } 

  std::string line;

  while (getline(inputFile, line)) { 
  const double inputValue = std::stod(line);
  const double outputValue = mathfunctions::sqrt(inputValue);//stat::sqrt(inputValue);
  const double outputValue2 = share::square(inputValue);
  std::cout << "The root of " << inputValue << " is " << outputValue << " and square is " << outputValue2 << std::endl;
  } 

  inputFile.close(); 

  return 0;
}
