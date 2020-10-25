
#ifndef DRIVEE_MAINSCREEN_HPP
#define DRIVEE_MAINSCREEN_HPP
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Resources.hpp"

class MainScreen : public sf::Drawable{
public:
    MainScreen();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win,sf::Vector2<float> &translated_pos);
    ~MainScreen();
    std::string options="empty";

private:
    sf::Sprite buttonDriver;
    sf::Sprite buttonPassenger;
    sf::Sprite appName;
    sf::Sprite map;
    sf::Sprite userButton;
    Resources resources;

};

#endif
