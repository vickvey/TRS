#include "Passenger.hh"
#include <iostream>

Passenger::Passenger(){
  this->name = "default";
  this->age = 0;
  this->contact = 123456789;
  this->gender = "Its not defined yet";
}

Passenger::Passenger(const std::string& name, int age, int contact, const std::string& gender){
  this->name = name;
  this->age = age;
  this->contact = contact;
  this->gender = gender;
}

const std::string& Passenger::getName() const{
  return name;
}

int Passenger::getAge() const{
  return age;
}

int Passenger::getContact() const{
  return contact;
}

const std::string& Passenger::getGender() const{
  return gender;
}

void Passenger::Display() const{
  std::cout << "->->-> || Passenger Details || <-<-<-\n";
  std::cout << "Name : " << getName() << "\n";
  std::cout << "Age : " << getAge() << "\n";
  std::cout << "Contact : " << getContact() << "\n";
  std::cout << "Gender : " << getGender() << "\n";
}
