#ifndef DRIVEE_TRIP_HPP
#define DRIVEE_TRIP_HPP


#include <string>

class Trip {
public:
    std::string from="Garzewko";
    std::string to="Wrocław";
    int distance=500;
    int count=30;

    int getPoints() const {
        return points;
    }
private:
    int points=initPoint(distance);
    int initPoint(int distance){
      int point;
      point = distance * 4;
      return point;
    }
};


#endif
