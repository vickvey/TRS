#include <iostream>
#include "Input.hh"

bool Input::getBoolInput(const std::string& prompt){
  bool value;
  std::cout << prompt;
  std::cin >> value;
  return value;
}

int Input::getIntInput(const std::string& prompt){
  int value;
  std::cout << prompt;
  std::cin >> value;
  return value;
}

double Input::getDoubleInput(const std::string& prompt){
  double value;
  std::cout << prompt;
  std::cin >> value;
  return value;
}

std::string Input::getStringInput(const std::string& prompt){
  std::string value;
  std::cout << prompt;
  std::cin >> value;
  return value;
}