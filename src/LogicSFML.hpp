#ifndef DRIVEE_LOGICSFML_HPP
#define DRIVEE_LOGICSFML_HPP

#include "SFML/Graphics.hpp"

class LogicSFML: public sf::Drawable{
public:
    LogicSFML();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win);
    ~LogicSFML();

};


#endif
