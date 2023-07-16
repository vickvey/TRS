#include "Reservation.hh"
#include <iostream>

Reservation::Reservation(){
  this->maxCapacity = 1000;
  this->nextTicketID = 1;
  this->totalReservations = 0;
}

void Reservation::makeReservation(const Ticket& ticket){
  if(totalReservations >= maxCapacity){
    std::cout << "Sorry! All Seats are booked!!\n";
    return;
  }
  int ticketID = nextTicketID++;
  Ticket newTicket = ticket;
  newTicket.setTicketID(ticketID);
  reservations.emplace(ticketID, ticket);
  totalReservations++;
  std::cout << "Reservation successfully made. Your ticket ID is: " << ticketID << "\n";
}

void Reservation::cancelReservation(int ticketID){
  reservations.erase(ticketID);
  totalReservations--;
  std::cout << "Reservation successfully cancelled.\n";
  this->nextTicketID--;
}

void Reservation::modifyReservation(int ticketID, const std::string& source, const std::string& destination){
  reservations[ticketID].updateTicket(source, destination);
  std::cout << "Reservation updated successfully. \n";
}

void Reservation::viewReservation(int ticketID) const {
  auto it = reservations.find(ticketID);
  if (it != reservations.end()) {
    // Ticket exists, display the ticket details
    const Ticket& ticket = it->second;
    ticket.viewTicket();
  } else {
    std::cout << "Ticket not found.\n";
  }
}

void Reservation::viewAllReservations() const {
  if(reservations.empty() == true){
    std::cout << "Reservations not found.\n";
    return;
  } else {
    std::cout << "~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout << "All Reservations :";
    for(const auto& pair : reservations){
      const Ticket& ticket = pair.second;
      ticket.viewTicket();
      std::cout << "\n";
    }
    std::cout << "~~~~~~~~~~~~~~~~~~~~~\n";
  }
}
