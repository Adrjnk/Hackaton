#ifndef DRIVEE_DRIVERFOUND_HPP
#define DRIVEE_DRIVERFOUND_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"

class DriverFound : public sf::Drawable {
public:
    DriverFound();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win);
    std::string options;
    ~DriverFound();
private:
    sf::Sprite background;
    sf::Sprite takeOffButton;
    sf::Sprite cancelButton;
    sf::Text text;
    Resources resources;
};


#endif
