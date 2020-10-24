//
// Created by Gus on 24.10.2020.
//

#ifndef DRIVEE_MAINSCREEN_HPP
#define DRIVEE_MAINSCREEN_HPP
#include <SFML/Graphics.hpp>
#include "Resources.hpp"

class MainScreen : public sf::Drawable{
public:
    MainScreen();
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    virtual ~MainScreen();

private:
    sf::Sprite buttonDriver;
    sf::Sprite buttonPassenger;
    sf::Sprite appName;
    Resources resources;


};


#endif //DRIVEE_MAINSCREEN_HPP
