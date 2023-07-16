#ifndef RESERVATIONS_HH
#define RESERVATIONS_HH

#include "Train.hh"
#include "Ticket.hh"
#include <map>

class Reservation {
public:
  // Constructors and destructor
  Reservation();
  // Methods
  void makeReservation(const Ticket& ticket);
  void cancelReservation(int ticketID);
  void modifyReservation(int ticketID, const std::string& source, const std::string& destination);
  void viewReservation(int ticketID) const;
  void viewAllReservations() const;

private:
  int maxCapacity;                  // Maximum capacity of reservations
  int totalReservations;            // Total reservations made so far
  int nextTicketID;                 // Ticket ID for the next reservation
  std::map<int, Ticket> reservations; // Store reservations in a vector
};

#endif
