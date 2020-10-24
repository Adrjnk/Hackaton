#ifndef DRIVEE_TRIPSCREEN_HPP
#define DRIVEE_TRIPSCREEN_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"

class TripScreen : public sf::Drawable{
public:
    TripScreen();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win);
    ~TripScreen();
};


#endif //DRIVEE_TRIPSCREEN_HPP
