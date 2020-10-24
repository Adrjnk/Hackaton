#ifndef DRIVEE_TRIPSCREEN_HPP
#define DRIVEE_TRIPSCREEN_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"

class TripScreen {
public:
    TripScreen();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    ~TripScreen();


private:
    Resources resources;
    sf::Text whereToGo;
    sf::String playerInput;
    sf::Text Text;

};


#endif //DRIVEE_TRIPSCREEN_HPP
