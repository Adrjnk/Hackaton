#include "Logic.hpp"


Logic::Logic()  {
}

void Logic::setCoord(User &user) {
    user.navX = 0;
    user.navY = 0;
}

void Logic::setScore(User &user) {
    user.Score =+ user.getPoints;
}

