#ifndef TICKET_HH
#define TICKET_HH

#include <string>
#include "Passenger.hh"

class Ticket {
  public:
    // Constructor
    Ticket(); // default contructor
    Ticket(const std::string& name, int trainNum, const Passenger& passenger, int ticketID, const std::string& source, const std::string&
     destination, int coachNum, double fare, const std::string& paymentMethod);
    
    // Setters
    void setTicketID(int ticketID);
    
    // Getters
    const std::string& getTrainName() const;
    int getTrainNum() const;
    const Passenger& getPassenger() const;
    int getTicketID() const;
    const std::string& getSource() const;
    const std::string& getDestination() const;
    int getCoachNum() const;
    double getFare() const;
    const std::string& getPaymentMethod() const;

    // workings
    void viewTicket() const;
    void updateTicket(const std::string& source, const std::string& destination);

    // operators 
    Ticket operator= (const Ticket& ticket);
    
  private:
    std::string name;
    int trainNum;
    Passenger passenger;
    int ticketID;
    std::string source;
    std::string destination;
    int coachNum;
    double fare;
    std::string paymentMethod; 
};

#endif
