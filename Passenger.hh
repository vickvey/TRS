#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

class Passenger {
  public:
    Passenger();
    Passenger(const std::string& name, int age, int contact, const std::string& gender);
    const std::string& getName() const;
    int getAge() const;
    int getContact() const;
    const std::string& getGender() const;
    void Display() const;

  private:
    std::string name;
    int age;
    int contact;
    std::string gender;
};

#endif
