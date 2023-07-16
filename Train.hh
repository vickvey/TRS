#ifndef TRAIN_H
#define TRAIN_H
#include "Coach.hh"
#include <string>
#include <vector>

class Train {
  public:
    // constructors and destructors
    Train(int trainNum, int capacity,const std::string& name, const std::string& source,
      const std::string& destination);

    enum coachType {
      AC = 1, SL = 2, GN = 3
    };
    // methods
    void Display(); 
    int getTrainNum() const; 
    const std::string& getName() const; 
    const std::string& getSource() const; 
    const std::string& getDest() const; 
    void AddCoach(const coachType& type, const Coach& coach);

  private:
    int trainNum; // train number
    int capacity; // maxm sitting capacity
    std::vector<Coach> AC_Coaches; // vector storing AC coaches
    std::vector<Coach> SL_Coaches; // vector storing Sleeper coaches
    std::vector<Coach> GN_Coaches; // vector storing General coaches
    std::string name;
    std::string source;
    std::string destination;   
};

#endif