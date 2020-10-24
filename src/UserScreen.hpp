#ifndef DRIVEE_USERSCREEN_HPP
#define DRIVEE_USERSCREEN_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"

class UserScreen {
public:
    UserScreen();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    ~UserScreen();
};


#endif