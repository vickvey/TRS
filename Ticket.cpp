#include "Ticket.hh"
#include "Passenger.hh"
#include <iostream>

// Constructor definition
Ticket::Ticket():name("ABC exp"), trainNum(1000) , ticketID(1), source("abc"), destination("bcd"),
  coachNum(1), fare(100), paymentMethod("cash"){};

Ticket::Ticket(const std::string& name, int trainNum, const Passenger& passenger, int ticketID, const std::string& source, 
const std::string& destination, int coachNum, double fare, const std::string& paymentMethod){
    this->name = name;
    this->trainNum = trainNum;
    this->passenger = passenger;
    this->ticketID = ticketID;
    this->source = source;
    this->destination = destination;
    this->coachNum = coachNum;
    this->fare = fare;
    this->paymentMethod = paymentMethod;
}

// Setter function definition
void Ticket::setTicketID(int ticketID){
  this->ticketID = ticketID;
}

// Getter function definitions
const std::string& Ticket::getTrainName() const {
  return name;
}
int Ticket::getTrainNum() const{
  return trainNum;
}

const Passenger& Ticket::getPassenger() const{
  return passenger;
}

int Ticket::getTicketID() const {
  return ticketID;
}

const std::string& Ticket::getSource() const {
  return source;
}

const std::string& Ticket::getDestination() const {
  return destination;
}

int Ticket::getCoachNum() const {
  return coachNum;
}

double Ticket::getFare() const {
  return fare;
}

const std::string& Ticket::getPaymentMethod() const {
  return paymentMethod;
}


// Working function definitions
void Ticket::viewTicket() const{
  std::cout << "\n-----------------------------------\n";
  std::cout << "Here is Your Ticket Details: \n";
  std::cout << "Train Name : " << getTrainName() << "\n";
  std::cout << "Train Number : " << getTrainNum() << "\n";
  passenger.Display();
  std::cout << "Ticket ID : " << getTicketID() << "\n";
  std::cout << "Source from : " << getSource() << "\n";
  std::cout << "Destination to : " << getDestination() << "\n";
  std::cout << "Coach Number : " << getCoachNum() << "\n";
  std::cout << "Fare : " << getFare() << "\n";
  std::cout << "Payment method : " << getPaymentMethod() << "\n";
  std::cout << "-----------------------------------\n";
}

void Ticket::updateTicket(const std::string& source, const std::string& destination){
  this->source = source;
  this->destination = destination;
}

// Operators 
Ticket Ticket::operator= (const Ticket& ticket){
  this->trainNum = ticket.getTrainNum();
  this->passenger = ticket.getPassenger();
  this->ticketID = ticket.getTicketID();
  this->source = ticket.getSource();
  this->destination = ticket.getDestination();
  this->coachNum = ticket.getCoachNum();
  this->fare = ticket.getFare();
  this->paymentMethod = ticket.getPaymentMethod();
  return *this;
}





