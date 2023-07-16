#ifndef INPUT_HH
#define INPUT_HH

#include <iostream>
#include <string>

class Input {
public:
  static bool getBoolInput(const::std::string& prompt);
  static int getIntInput(const std::string& prompt);
  static double getDoubleInput(const std::string& prompt);
  static std::string getStringInput(const std::string& prompt);
  // ... other input methods as needed
};

#endif
