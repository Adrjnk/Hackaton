#ifndef DRIVEE_TRIPSCREEN_HPP
#define DRIVEE_TRIPSCREEN_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"

class TripScreen {
public:
    TripScreen();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    ~TripScreen();
};


#endif //DRIVEE_TRIPSCREEN_HPP
