

#ifndef DRIVEE_CHOOSESCREEN_HPP
#define DRIVEE_CHOOSESCREEN_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"

class ChooseScreen : public sf::Drawable {
public:
    ChooseScreen();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win);
    ~ChooseScreen();
};


#endif //DRIVEE_CHOOSESCREEN_HPP
