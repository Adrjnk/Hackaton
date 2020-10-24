

#ifndef DRIVEE_CHOOSESCREEN_HPP
#define DRIVEE_CHOOSESCREEN_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"

class ChooseScreen {
public:
    ChooseScreen();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    ~ChooseScreen();
};


#endif //DRIVEE_CHOOSESCREEN_HPP
