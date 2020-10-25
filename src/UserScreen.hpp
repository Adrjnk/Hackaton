#ifndef DRIVEE_USERSCREEN_HPP
#define DRIVEE_USERSCREEN_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"

class UserScreen : public sf::Drawable {
public:
    UserScreen();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win);
    std::string options="empty";
    ~UserScreen();
};


#endif