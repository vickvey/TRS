#include <iostream>
#include "Train.hh"

Train::Train(int trainNum, int capacity, const std::string& name, const std::string& source,
  const std::string& destination){
  this->trainNum = trainNum;
  this->capacity = capacity;
  this->name = name;
  this->source = source;
  this->destination = destination;
}

int Train::getTrainNum() const{
  return trainNum;
}

const std::string& Train::getName() const{
  return name;
}

const std::string& Train::getSource() const{
  return source;
}

const std::string& Train::getDest() const{
  return destination;
}

void Train::AddCoach(const coachType& type, const Coach& coach){
  if(type == AC){
    AC_Coaches.push_back(coach);
    return;
  }
  if(type == SL){
    SL_Coaches.push_back(coach);
    return;
  }
  GN_Coaches.push_back(coach);
}

void Train::Display(){
  std::cout << "Here is Your Train: \n";
  int AC = 1; int SL = 1; int GN = 1;

  std::cout << "(AC_Coaches)\n";
  for(auto it = AC_Coaches.begin(); it < AC_Coaches.end(); it++){
    std::cout << "AC Coach : " << AC << "\n"; 
    AC++;
    it->Display();
  } 

  std::cout << "(SL_Coaches)\n";
  for(auto it = SL_Coaches.begin(); it < SL_Coaches.end(); it++){
    std::cout << "SL Coach : " << SL << "\n"; 
    SL++;
    it->Display();
  } 

  std::cout << "(GN_Coaches)\n";
  for(auto it = GN_Coaches.begin(); it < GN_Coaches.end(); it++){
    std::cout << "GN Coach : " << GN << "\n"; 
    GN++;
    it->Display();
  } 
}