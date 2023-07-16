#ifndef COACH_HH
#define COACH_HH
#include <vector>

class Coach {
  public:
    Coach(int coachNum, int coachCap, double fare); // constructor
    void bookSeat();
    void cancelSeat();
    bool availSeat();
    int getCoachCap() const;
    double getFare() const;
    int getCoachNum() const;
    int getFilledNum() const;
    void Display();
  private:
    double fare; // coach fare
    int coachNum; // unique coach number
    int coachCap; // coach capacity of seats
    int filled; // filled seats
    std::vector <bool> seats;
};

#endif