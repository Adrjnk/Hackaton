#ifndef DRIVEE_TRIPSCREEN_HPP
#define DRIVEE_TRIPSCREEN_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"
#include "vector"

class TripScreen : public sf::Drawable{
public:
    TripScreen();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win);
    std::string options="empty";
    ~TripScreen();


private:
    Resources resources;
    sf::Text whereToGo;
    sf::String playerInput;
    sf::Text Text;

};


#endif
