#ifndef DRIVEE_USERSCREEN_HPP
#define DRIVEE_USERSCREEN_HPP

#include "SFML/Graphics.hpp"
#include "Resources.hpp"

class UserScreen : public sf::Drawable {
public:
    UserScreen();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win,sf::Vector2<float> &translated_pos);
    std::string options="empty";
    ~UserScreen();
private:
    sf::Sprite homeIcon;
    sf::Sprite workIcon;
    sf::Sprite backButton;
    Resources resources;
    sf::Text textUsername;
    sf::Text textPoints;
    sf::Text textCO2;
    sf::Text textRoads;
    sf::Text textDestinations;
};


#endif