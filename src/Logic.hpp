#ifndef DRIVEE_LOGIC_HPP
#define DRIVEE_LOGIC_HPP
#include "User.hpp"

class Logic {
    public:
    void setCoord(User &user);
    void setScore(User &user);


private:
    User user;
    Logic();

};


#endif
