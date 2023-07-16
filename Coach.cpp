#include "Coach.hh"
#include <iostream>

Coach::Coach(int coachNum, int coachCap, double fare){
  if(coachCap < 0 || coachNum < 0 || fare < 0){
    std::cout << "Error!! Constructing the Coach!!\n";
    exit(1);
  }
  this->coachNum = coachNum;
  this->coachCap = coachCap;
  this->fare = fare;
  this->filled = 0;
}

int Coach::getCoachNum() const{
  return coachNum;
}

int Coach::getCoachCap() const{
  return coachCap;
}

double Coach::getFare() const{
  return fare;
}

int Coach::getFilledNum() const{
  return filled;
}

void Coach::bookSeat(){
  if(filled >= coachCap){
    std::cout << "Sorry! No seats available!\n";
    return;
  } bool temp = true;
  seats.push_back(temp);
  filled++;
}

bool Coach::availSeat(){
  if(filled < coachCap){
    return true;
  } else {
    return false;
  }
}

void Coach::cancelSeat(){
  if (filled <= 0) {
    std::cout << "Sorry! Seats are already empty!\n";
    return;
  }
  seats.pop_back();
  filled--;
}

void Coach::Display(){
  int cap = coachCap;
  int space = 0;
  if(coachCap % 3 == 0){
    space = coachCap;
  } else if(coachCap % 3 == 1){
    space = coachCap + 2;
  } else {
    space = coachCap + 1;
  } // space is decided
  int cols = 3;
  int rows = space/3;
  int occupied = filled;

  //printing the layout
  std::cout << "~~~~~~~~~~~\n";
  for(int i = 1; i<=rows; i++){
    std::cout << "|";
    for(int j = 1; j<=cols; j++){
      if(occupied > 0){
        std::cout << " * ";
        occupied--;
        cap--;
      } else {
        if(cap <= 0){
          std::cout << " # ";
        } else {
          std::cout << " - "; cap--;
        }
      }
    } std::cout << "|\n";
  }
  std::cout << "~~~~~~~~~~~\n";
}

